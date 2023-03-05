#pragma once
#include <iostream>
#include "Point2.h"
#include "Line2.h"

class Circle2 
{
public:
	Circle2();
	Circle2(Point2 np1, float rad);

	float circumference() const;
	float area() const;
	bool contains(Point2 p) const;
	bool contains(Line2 l) const;
	void scale(float factor);
	bool operator<=(Line2 l);
	bool operator<=(Point2 p);
	friend std::ostream& operator<<(std::ostream& os, const Circle2& circle);

private:
	Point2 p1;
	Point2 p2;
	float r;
};

std::ostream& operator<<(std::ostream& os, const Circle2& circle);