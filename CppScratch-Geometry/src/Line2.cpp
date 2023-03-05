#include "Line2.h"
#include <iostream>

Line2::Line2() : p1(), p2() 
{
}

Line2::Line2(Point2 np1, Point2 np2) : p1(np1), p2(np2) {}

float Line2::length() const
{
    return p1.distanceFrom(p2);
    //or
	//return p1 - p2;
}

std::ostream& operator<<(std::ostream& os, const Line2& line) {
    os << "line ((" << line.p1.getX() << ", " << line.p1.getY() << ") to (" << line.p2.getX() << ", " << line.p2.getY() << "))";
    return os;
}