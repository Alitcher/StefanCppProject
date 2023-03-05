#include <cmath>
#include "Point2.h"

// Getters and setters for x and y coordinates
float Point2::getX() const
{
	return x;
}
float Point2::getY() const
{
	return y;
}

void Point2::setX(float _x)
{
	x = _x;
}
void Point2::setY(float _y)
{
	y = _y;
}

float Point2::distanceFrom(Point2 p) const
{
	float dx = getX() - p.getX();
	float dy = getY() - p.getY();

	std::cout << "func distance: " << sqrt(dx * dx + dy * dy) << std::endl;
	return std::sqrt(dx * dx + dy * dy);
}



// Operator overloading
std::ostream& operator<<(std::ostream& os, const Point2& point) {
	os << "(" << point.getX() << ", " << point.getY() << ")";
	return os;
}

// Default constructor
Point2::Point2() : x(0), y(0)
{
	std::cout << "x: " << x << ", y: " << y << std::endl;
}

// Constructor with arguments
Point2::Point2(float nx, float ny) : x(nx), y(ny)
{
	std::cout << "x: " << x << ", y: " << y << std::endl;
}

float Point2::operator- (const Point2& p) const // use const to ensure that the member variables of Point2 object cannot be modified
{
	return std::sqrt((getX() - p.getX()) * (getX() - p.getX()) + (getY() - p.getY()) * (getY() - p.getY()));
}
