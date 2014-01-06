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

#include "InputWaveform.hpp"
#include "PrismaticInputAdapter.hpp"
#include "math.h"
#include "BeatDetect.hpp"

InputWaveform::InputWaveform(): MilkdropWaveform() {}

void InputWaveform::WaveformMath(RenderContext &context)
{
  PrismaticInputAdapter* input = context.prismaticInput;

  // draw nothing if no prismatic input
  if (input == 0) { return; }
  // Seg fault!
  std::vector<PrismaticInputAdapter::InputPoint> points = input->GetPoints();

  // std::cout << (points != 0 ? "1" : "0")<< "\n";

  int i;
  float wave_x_temp=0;
  float wave_y_temp=0;

  loop = true;
  rot = 0.5;
  aspectScale = 1.0;

  wave_x_temp=-2*0.4142*(fabs(fabs(mystery)-.5)-.5);

  rot = -mystery*90;
  aspectScale = 1.0+wave_x_temp;
  wave_x_temp=-1*(x-1.0);
  samples = 1 ? 512-32 : context.beatDetect->pcm->numsamples;

  for ( int i=0;i < samples;i++)
  {

    wavearray[i][0]= i / (float)  samples;
    wavearray[i][1]=context.beatDetect->pcm->pcmdataR[i]*.04*scale+wave_x_temp;

    // std::cout << wavearray[i][0] << ", y:" << wavearray[i][1] << "\n";
  }
  //	  printf("%f %f\n",renderTarget->texsize*wave_y_temp,wave_y_temp);
}
