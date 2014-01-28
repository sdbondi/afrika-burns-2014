/*
 * Prismatic input adapter
 *
 * Base class for all input adapters
 */
#ifndef __PRISMATIC_INPUT_ADAPTER_HPP
#define __PRISMATIC_INPUT_ADAPTER_HPP
#include <stdint.h>
#include <vector>

enum pm_input_type {
  TestInput,
  MouseInput,
  OpenNIInput
};

class PrismaticInputAdapter
{
  public:
    struct InputPoint {
      float x;
      float y;
      float z;
    };

    PrismaticInputAdapter();
    virtual ~PrismaticInputAdapter();

    virtual std::vector<InputPoint> GetPoints() = 0;
    virtual const pm_input_type input_type() = 0;
};
#endif
