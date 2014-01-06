/**
 *
 */
#ifndef __PRISMATIC_TEST_INPUT_ADAPTER_HPP
#define __PRISMATIC_TEST_INPUT_ADAPTER_HPP
#include "PrismaticInputAdapter.hpp"

class PrismaticTestInputAdapter: public PrismaticInputAdapter
{
  public:
    PrismaticTestInputAdapter();

    virtual std::vector<PrismaticInputAdapter::InputPoint> GetPoints();

  private:
    float x;
    float y;
    float z;

    float dirX, dirY;
};
#endif
