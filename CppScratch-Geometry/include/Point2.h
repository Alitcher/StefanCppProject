#pragma once
#include <iostream>

class Point2
{
public:
	float getX() const;
	float getY() const;

	void setX(float _x);
	void setY(float _y);

	float distanceFrom(Point2 p) const;
	Point2();
	Point2(float nx, float ny);
	float operator- (const Point2& p) const;

	friend std::ostream& operator<<(std::ostream& os, const Point2& point);

private:
	float x;
	float y;
};

std::ostream& operator<<(std::ostream& os, const Point2& point);