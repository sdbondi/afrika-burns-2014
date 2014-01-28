/**
 *
 */
#ifndef __PRISMATIC_MOUSE_INPUT_ADAPTER_HPP
#define __PRISMATIC_MOUSE_INPUT_ADAPTER_HPP
#include "PrismaticInputAdapter.hpp"

class PrismaticMouseInputAdapter: public PrismaticInputAdapter
{
  public:
    PrismaticMouseInputAdapter();

    virtual std::vector<PrismaticInputAdapter::InputPoint> GetPoints();
    virtual const pm_input_type input_type() { return MouseInput; }

    void UpdateCoords(float x, float y, float z = -1.0f);
    void UpdateCoords(PrismaticInputAdapter::InputPoint p);

    void SetZ(float z);

  private:
    float x;
    float y;
    float z;
};
#endif
