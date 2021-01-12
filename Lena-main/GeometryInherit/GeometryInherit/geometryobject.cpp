#include "geometryobject.h"

GeometryObject::GeometryObject()
{
    _x=0;
    _y=0;
}

GeometryObject::GeometryObject(double x,double y)
{
    SetXY(x,y);
}

void GeometryObject::SetXY(double x, double y)
{
    _x=x;
    _y=y;
}

double GeometryObject::x()const
{
    return _x;
}

double GeometryObject::y()const
{
    return _y;
}
