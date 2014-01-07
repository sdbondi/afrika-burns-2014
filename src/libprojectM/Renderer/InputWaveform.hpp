/*
 * InputWaveform.hpp
 *
 */

#ifndef INPUTWAVEFORM_HPP_
#define INPUTWAVEFORM_HPP_

#include "Renderable.hpp"
#include "MilkdropWaveform.hpp"

class InputWaveform : public MilkdropWaveform
{
public:
	InputWaveform();

  virtual void Draw(RenderContext &context);
  virtual void WaveformMath(RenderContext &context);

protected:
  float depth;

private:
  inline void blobMath(RenderContext &context, PrismaticInputAdapter::InputPoint* p);
  inline void multiPointMath(RenderContext &context, std::vector<PrismaticInputAdapter::InputPoint> &points);
};
#endif /* INPUTWAVEFORM_HPP_ */
