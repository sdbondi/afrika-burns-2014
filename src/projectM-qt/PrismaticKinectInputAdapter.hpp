/**
 *
 */
#ifndef __PRISMATIC_KINECT_INPUT_ADAPTER_HPP
#define __PRISMATIC_KINECT_INPUT_ADAPTER_HPP
#include "PrismaticInputAdapter.hpp"

class PrismaticKinectInputAdapter: public PrismaticInputAdapter
{
  public:
    PrismaticKinectInputAdapter();

    virtual std::vector<PrismaticInputAdapter::InputPoint> GetPoints();
    virtual const pm_input_type_t input_type() { return PRISMATIC_KINECT_INPUT; }
};
#endif
