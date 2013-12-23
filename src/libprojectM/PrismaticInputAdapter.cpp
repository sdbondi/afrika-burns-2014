#include "PrismaticInputAdapter.hpp"

#include <stdexcept>
#include <iostream>

// Adapters
#include "PrismaticTestInputAdapter.hpp"

// Constructor
PrismaticInputAdapter::PrismaticInputAdapter()
{

}

/*static */PrismaticInputAdapter* PrismaticInputAdapter::Factory(const pm_input_type_t adapter_type) {
  std::cout << "Creating PrismaticInputAdapter";
  switch (adapter_type) {
    case PRISMATIC_TEST_INPUT:
      return new PrismaticTestInputAdapter();

    case PRISMATIC_MOUSE_INPUT:
      throw std::runtime_error("Not implemented");

    case PRISMATIC_KINECT_INPUT:
      throw std::runtime_error("Not implemented");

    default:
      throw std::runtime_error("Invalid Prismatic Input Type");
  }

  return 0;
}

void PrismaticInputAdapter::CleanUp()
{
  std::cout << "Cleaning up PrismaticInputAdapter";
}
