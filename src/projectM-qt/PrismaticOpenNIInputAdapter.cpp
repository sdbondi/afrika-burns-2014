#include "PrismaticOpenNIInputAdapter.hpp"

#include <stdio.h>

PrismaticOpenNIInputAdapter::PrismaticOpenNIInputAdapter(): PrismaticInputAdapter()
{ }

std::vector<PrismaticInputAdapter::InputPoint> PrismaticOpenNIInputAdapter::GetPoints()
{
  std::vector<PrismaticInputAdapter::InputPoint> result;

  PrismaticInputAdapter::InputPoint p = {0.5,0.5,0.0};
  result.push_back(p);

  return result;
}

