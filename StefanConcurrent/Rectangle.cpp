#include "Rectangle.h"

int Rectangle::GetPerimeter() const
{
	return 2 * (m_width + m_height);
}

int Rectangle::GetArea() const
{
	return m_width * m_height;
}

Rectangle::Rectangle(int x, int y)
{
	m_width = x;
	m_height = y;
}