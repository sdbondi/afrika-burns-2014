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

void InputWaveform::WaveformMath(RenderContext &context)
{
  PrismaticInputAdapter* input = context.prismaticInput;
  assert(input != 0);

  std::vector<PrismaticInputAdapter::InputPoint> points = input->GetPoints();
  size_t p_size = points.size();

  // No inputs, do nothing
  if (p_size == 0) { return; }
  else if (p_size == 1) {
    // Draw a blob at the input point
    mode = RadialBlob;
    PrismaticInputAdapter::InputPoint* p = &points[0];

    aspectScale = p->z*0.3f;
    x = p->x;
    y = p->y;
    // printf("%f, %f \n", x, y);
    MilkdropWaveform::WaveformMath(context);
    return;
  }

  int i;

  loop = false;
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
  for (i = 0;i < samples;i++)
  {
    temp_x += incr;
    float temp_y = grad*temp_x+grad*p1.x-p1.y;

    wavearray[i][0] = temp_x;
    wavearray[i][1] = temp_y;// + context.beatDetect->pcm->pcmdataR[i]*.04*scale;
  }
}
