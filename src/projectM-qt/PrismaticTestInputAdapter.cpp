#include "PrismaticTestInputAdapter.hpp"

PrismaticTestInputAdapter::PrismaticTestInputAdapter(): PrismaticInputAdapter()
{
  dirX = dirY = 1.0f;
}

std::vector<PrismaticInputAdapter::InputPoint> PrismaticTestInputAdapter::GetPoints()
{
  x+=dirX*0.01f;
  if (x >= 1.0f || x <= 0.0f) { dirX = -dirX; }

  y+=dirY*0.01f;
  if (y >= 1.0f || y <= 0.0f) { dirY = -dirY; }

  if (z > 1.0f) { z=0.5f; } else { z=1.0f; }
  std::vector<PrismaticInputAdapter::InputPoint> result;

  PrismaticInputAdapter::InputPoint p = {x,y,z};
  result.push_back(p);

  return result;
}
