#include <stdio.h>
#include <iostream>
#include "Rectangle.h"

using namespace std;

CalculateRectangle();

void main()
{
	CalculateRectangle();
	cout << "Program Ended" << endl;
	//return EXIT_SUCCESS;
	system("pause");//prevent console window to close
}

void CalculateRectangle()
{
	Rectangle sy(2, 4);
	cout << "Areas is: " << sy.GetArea() << endl;

	Rectangle mn(17, 5);
	cout << "Areas is: " << mn.GetArea() << endl;
	cout << "Perimeter is: " << mn.GetPerimeter() << endl;
}