/**
 *
 */
#ifndef __PRISMATIC_OPENNI_INPUT_ADAPTER_HPP
#define __PRISMATIC_OPENNI_INPUT_ADAPTER_HPP
#include "PrismaticInputAdapter.hpp"

class PrismaticOpenNIInputAdapter: public PrismaticInputAdapter
{
  public:
    PrismaticOpenNIInputAdapter();

    virtual std::vector<PrismaticInputAdapter::InputPoint> GetPoints();
    virtual const pm_input_type input_type() { return OpenNIInput; }
};
#endif
