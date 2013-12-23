/*
 * Prismatic input adapter
 *
 * Base class for all input adapters
 */
#ifndef __PRISMATIC_INPUT_ADAPTER_HPP
#define __PRISMATIC_INPUT_ADAPTER_HPP

#include <iostream>

class PrismaticInputAdapter
{
  public:
    void CleanUp();

    static PrismaticInputAdapter* Factory(const std::string adapter_name);
  private:

};
#endif
