#pragma once
#include "Point2.h"
#include <iostream>
#include <cmath>

class Line2 
{
public:
	Line2();
	Line2(Point2 np1, Point2 np2);

	float length() const;

	friend std::ostream& operator<<(std::ostream& os, const Line2& line);

	Point2 p1;
	Point2 p2;
};

std::ostream& operator<<(std::ostream& os, const Line2& line);