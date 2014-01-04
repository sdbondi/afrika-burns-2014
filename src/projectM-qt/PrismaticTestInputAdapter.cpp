#include "PrismaticTestInputAdapter.hpp"

std::vector<InputPoints> PrismaticTestInputAdapter::GetPoints()
{
  x+=0.01;
  y+=0.01;
  if (z == 1.0) { z=0.5; } else { z=1.0; }
  std::vector<InputPoints> result;

  InputPoints p;
  p.x = x;
  p.y = y;
  p.z = z;
  result.push_back(p);

  return result;
}
