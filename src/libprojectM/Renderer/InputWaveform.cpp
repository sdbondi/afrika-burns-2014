/*
 * MilkdropWaveform.cpp
 *
 */
#include <iostream>

#ifdef LINUX
#include <GL/gl.h>
#endif
#ifdef WIN32
#include "glew.h"
#endif
#ifdef __APPLE__
#include <OpenGL/gl.h>
#endif

#include <cmath>
#include <assert.h>
#include <stdio.h>

#include "InputWaveform.hpp"
#include "PrismaticInputAdapter.hpp"
#include "math.h"
#include "BeatDetect.hpp"

InputWaveform::InputWaveform(): MilkdropWaveform() {}

void InputWaveform::Draw(RenderContext &context)
{
  // Only draw this if we have prismatic input
  if (context.prismaticInput != 0)
  {
    MilkdropWaveform::Draw(context);
  }
}

inline void InputWaveform::blobMath(RenderContext &context, PrismaticInputAdapter::InputPoint* p)
{
  int i;
  float r, theta;
  BeatDetect* beatDetect = context.beatDetect;
  float t = context.time;

  x = p->x;
  y = p->y;
  depth = fmax(p->z, 0.5f);

  samples = 512-32;

  for (i=0; i<samples; i++)
  {
    theta = i/(float)samples*2*M_PI + beatDetect->pcm->pcmdataL[i+32] + t*2.3;
    r = 0.06 + 0.1*beatDetect->pcm->pcmdataR[i];

    wavearray[i][0] = x - r*cos(theta);
    wavearray[i][1] = y - r*sin(theta);
  }
}

inline void InputWaveform::multiPointMath(RenderContext &context, std::vector<PrismaticInputAdapter::InputPoint> &points)
{
  // TODO: Awesome multi-point effects
  int i;

  float wave_x_temp=0;
  float wave_y_temp=0;

  rot = -mystery*90;
  aspectScale = 1.0;

  samples = 512-32;//context.beatDetect->pcm->numsamples;

  PrismaticInputAdapter::InputPoint p1 = {0.5f,0.5f,0};
  PrismaticInputAdapter::InputPoint p2 = {0.5f,0.8f,0};

  float grad = (p2.x == p1.x) ? 1.0f : (p2.y - p1.y) / (p2.x - p1.x);
  float dist = sqrt(pow(p2.x-p1.x, 2) + pow(p2.y - p1.y, 2));
  float incr = dist/(float)samples;

  printf("%f, %f \n", dist, grad);
  float temp_x = p1.x;
  float temp_y;
  for (i = 0;i < samples;i++)
  {
    temp_x += incr;
    temp_y = grad*temp_x+grad*p1.x-p1.y;

    wavearray[i][0] = temp_x;
    wavearray[i][1] = temp_y;// + context.beatDetect->pcm->pcmdataR[i]*.04*scale;
  }
}

void InputWaveform::WaveformMath(RenderContext &context)
{
  PrismaticInputAdapter* input = context.prismaticInput;
  BeatDetect* beatDetect = context.beatDetect;
  float t = context.time;

  assert(input != 0);

  std::vector<PrismaticInputAdapter::InputPoint> points = input->GetPoints();

  two_waves = false;
  loop = false;

  // TODO: Colour calculations
  b = r = depth;
  g = -1.0*(depth - 1.0);

  rot = 0;
  aspectScale = context.aspectRatio;

  size_t p_size = points.size();
  if (p_size == 1) {
    // Draw a blob at the input point
    this->blobMath(context, &points[0]);
  } else {
    // Else do something a little more complex
    this->multiPointMath(context, points);
  }
}
