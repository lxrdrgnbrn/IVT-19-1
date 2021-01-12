#include <math.h>
#include "segmentline.h"

SegmentLine::SegmentLine()
{
    _x=0;
    _y=0;
    _x1=0;
    _y1=0;
}

SegmentLine::SegmentLine(double x,double y, double x1, double y1)
{
    SetXY(x,y);
    SetX1Y1(x1,y1);
}

void SegmentLine::SetX1Y1(double x1,double y1)
{
    _x1=x1;
    _y1=y1;
}

double SegmentLine::x1()const
{
    return _x1;
}

double SegmentLine::y1()const
{
    return _y1;
}

double SegmentLine::LengthOfSegment()const
{
    double l;
    l=sqrt(pow(_x1-_x,2)+pow(_y1-_y,2));
    return l;
}
