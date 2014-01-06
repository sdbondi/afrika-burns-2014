#include "PrismaticTestInputAdapter.hpp"

std::vector<PrismaticInputAdapter::InputPoint> PrismaticTestInputAdapter::GetPoints()
{
  x+=0.01;
  y+=0.01;
  if (z == 1.0) { z=0.5; } else { z=1.0; }
  std::vector<PrismaticInputAdapter::InputPoint> result;

  InputPoint p = {x,y,z};
  result.push_back(p);

  return result;
}
