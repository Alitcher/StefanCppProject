#include <stdio.h>
#include <iostream>
#include "rectangle.h"

using namespace std;

void TestRectangle()
{

	Rectangle mn(17, 5);
	cout << "Areas is: " << mn.GetArea() << endl;
	cout << "Perimeter is: " << mn.GetPerimeter() << endl;
}

void main()
{
	//polymorphism = multiple functions with the same name but different arguments
	//testMatrix();
	//testPointer();
	TestRectangle();
	cout << "Program Ended" << endl;
	//return EXIT_SUCCESS;
	system("pause");//prevent console window to close
}