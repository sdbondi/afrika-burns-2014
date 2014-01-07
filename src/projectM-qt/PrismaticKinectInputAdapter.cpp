#include "PrismaticKinectInputAdapter.hpp"

#include <stdio.h>

PrismaticKinectInputAdapter::PrismaticKinectInputAdapter(): PrismaticInputAdapter()
{ }

std::vector<PrismaticInputAdapter::InputPoint> PrismaticKinectInputAdapter::GetPoints()
{
  std::vector<PrismaticInputAdapter::InputPoint> result;

  PrismaticInputAdapter::InputPoint p = {0.5,0.5,0.0};
  result.push_back(p);

  return result;
}

