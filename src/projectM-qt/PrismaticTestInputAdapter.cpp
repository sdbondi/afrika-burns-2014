#include "PrismaticTestInputAdapter.hpp"

const int PrismaticTestInputAdapter::X()
{
  return x++;
}

const int PrismaticTestInputAdapter::Y()
{
  return y++;
}

const int PrismaticTestInputAdapter::Depth()
{
  return depth++;
}

