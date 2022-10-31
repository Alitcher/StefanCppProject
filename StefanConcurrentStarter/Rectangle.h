#pragma once

class Rectangle
{

public:
	int GetPerimeter() const;
	int GetArea(int width, int height) const;
	int GetArea() const;

	Rectangle();
	Rectangle(int x, int y);

private:
	int m_width, m_height;

};