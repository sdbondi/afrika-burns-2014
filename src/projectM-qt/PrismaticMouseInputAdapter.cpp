#include "PrismaticMouseInputAdapter.hpp"

#include <stdio.h>

PrismaticMouseInputAdapter::PrismaticMouseInputAdapter(): PrismaticInputAdapter()
                                                          ,x(0.0f), y(0.0f), z(0.0f)
{ }

std::vector<PrismaticInputAdapter::InputPoint> PrismaticMouseInputAdapter::GetPoints()
{
  std::vector<PrismaticInputAdapter::InputPoint> result;

  PrismaticInputAdapter::InputPoint p = {x,y,z};
  result.push_back(p);

  p.x = 0.5;
  p.y = 0.5;
  result.push_back(p);

  p.x = 0.3;
  p.y = 0.8;
  result.push_back(p);

  return result;
}

void PrismaticMouseInputAdapter::UpdateCoords(float x, float y, float z)
{
  this->x = x;
  this->y = y;
  if (z > 0.0f) {
    this->z = z;
  }
}

void PrismaticMouseInputAdapter::UpdateCoords(PrismaticInputAdapter::InputPoint p)
{
  this->x = p.x;
  this->y = p.y;
  this->z = p.z;
}

void PrismaticMouseInputAdapter::SetZ(float z) { this->z = z; }
