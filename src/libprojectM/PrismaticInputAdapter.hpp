/*
 * Prismatic input adapter
 *
 * Base class for all input adapters
 */
#ifndef __PRISMATIC_INPUT_ADAPTER_HPP
#define __PRISMATIC_INPUT_ADAPTER_HPP
#include <stdint.h>
#include <vector>

typedef uint8_t pm_input_type_t;
const pm_input_type_t PRISMATIC_TEST_INPUT = 0;
const pm_input_type_t PRISMATIC_MOUSE_INPUT = 1;
const pm_input_type_t PRISMATIC_KINECT_INPUT = 2;

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
    virtual const pm_input_type_t input_type() = 0;
};
#endif
