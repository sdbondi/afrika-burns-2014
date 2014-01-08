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

  // PrismaticInputAdapter::InputPoint p = {x,y,z};
  PrismaticInputAdapter::InputPoint p = {0.25,0.25,0};
  result.push_back(p);

  p.x = 0.75;
  p.y = 0.5;
  result.push_back(p);

  return result;
}
