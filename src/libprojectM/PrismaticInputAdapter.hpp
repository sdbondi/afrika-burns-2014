/*
 * Prismatic input adapter
 *
 * Base class for all input adapters
 */
#ifndef __PRISMATIC_INPUT_ADAPTER_HPP
#define __PRISMATIC_INPUT_ADAPTER_HPP
#include <stdint.h>

typedef uint8_t pm_input_type_t;
const pm_input_type_t PRISMATIC_TEST_INPUT = 0;
const pm_input_type_t PRISMATIC_MOUSE_INPUT = 1;
const pm_input_type_t PRISMATIC_KINECT_INPUT = 2;

class PrismaticInputAdapter
{
  public:
    PrismaticInputAdapter();
    void CleanUp();

    static PrismaticInputAdapter* Factory(const pm_input_type_t adapter_type);
  private:

};
#endif
