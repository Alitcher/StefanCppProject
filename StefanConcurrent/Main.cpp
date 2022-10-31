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

int main()
{
	TestRectangle();
	cout << "Program Ended" << endl;

	return EXIT_SUCCESS;

	system("pause");
}