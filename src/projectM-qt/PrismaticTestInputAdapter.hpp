/**
 *
 */
#ifndef __PRISMATIC_TEST_INPUT_ADAPTER_HPP
#define __PRISMATIC_TEST_INPUT_ADAPTER_HPP
#include "PrismaticInputAdapter.hpp"

class PrismaticTestInputAdapter: public PrismaticInputAdapter
{
  public:
    PrismaticTestInputAdapter(): PrismaticInputAdapter() {};

    const int X();
    const int Y();
    const int Depth();

  private:
    int x;
    int y;
    int depth;
};
#endif
