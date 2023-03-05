//This file contains the 'main' function. Program execution begins and ends there.
//
#include "geometry.h"

using namespace std;

int main()
{
	cout << "Welcone to HW2 by Alicia Sudlerd: " << endl;
	cout << "Not runnung of VS..." << endl;
	float x1, y1, x2, y2;
	bool userExit = false;
	int test_count = 0;

	//ex1
	cout << "Please enter x for p1: ";
	cin >> x1;

	cout << "Please enter y for p1: ";
	cin >> y1;
	Point2 p1(x1, y1);

	cout << "Please enter x for p2: ";
	cin >> x2;

	cout << "Please enter y for p2: ";
	cin >> y2;
	Point2 p2(x2, y2);
	std::cout << "p1 (x,y): " << p1 << ", p2 (x,y): " << p2 << endl;

	//ex2
	Line2 l1(p1, p2);

	//ex3
	Circle2 c1(p1, 5);


	int userInput;

	while (!userExit)
	{
		DisplayInstruction();

		cin >> userInput;

		switch (userInput)
		{
		case 10:
			cout << "you choose 10: point distance" << endl;
			GetDistance10(p1, p2);
			break;
		case 11:
			cout << "you choose 11: " << endl;

			cout << "Please re-enter x for p2: ";
			cin >> x2;

			cout << "Please re- enter y for p2: ";
			cin >> y2;
			p2.setX(x2);
			p2.setY(y2);
			std::cout << "p1 (x,y): " << p1 << ", p2 (x,y): " << p2 << endl;

			break;
		case 20:
			cout << "you choose 20: " << endl;
			cout << "l1: " << l1 << endl;
			break;
		case 21:
			cout << "you choose 20: " << endl;
			cout << "l1: " << l1.length() << endl;
			break;
		case 30:
			cout << "you choose 30: " << endl;
			cout << "c1: " << c1 << endl;
			break;
		case 31:
			cout << "you choose 31: " << endl;
			cout << c1.circumference() << endl;
			break;
		case 32:
			cout << "you choose 32: " << endl;
			cout << "" << c1.area() << endl;

			break;
		case 33:
			cout << "you choose 33: " << endl;
			CheckContain33(c1);
			break;
		case 34:
			cout << "you choose 34: " << endl;

			CheckContain34(c1);
			break;
		case 35:
			cout << "you choose 35: " << endl;

			float fac;
			cout << "Please enter factor to scale: ";
			cin >> fac;
			c1.scale(fac);
			break;
		default:
			userExit = true;
			break;
		}
		test_count++;
		cout << endl;
	}


	std::cout << "program ended! with tests "<< test_count<<" times." << endl;


}

void DisplayInstruction()
{
	cout << "please select which function you want to procees: " << endl;
	cout << "For Points: 10 = point distance, 11 = change p2 coordinate" << endl;
	cout << "For Line: 20 = get 2 points, 21 = get length of p1 and p2" << endl;
	cout << "For Circle: 30 = outputs the circle in the form (p1, r), 31 = get circumference, 32 = area, 33 = check contain selected point, 34 = check contain selected line, 35 = scale the circle" << endl;
	cout << "0 = exit: " << endl;
}

void GetDistance10(Point2& p1, Point2& p2)
{
	cout << p1.distanceFrom(p2) << endl;
}

void CheckContain33(Circle2& c1)
{
	float x_check, y_check;

	cout << "Please re-enter x for point_to_check: ";
	cin >> x_check;

	cout << "Please re- enter y for point_to_check: ";
	cin >> y_check;
	Point2 point_to_check(x_check, y_check);

	cout << "contain " << point_to_check << ": " << boolalpha << c1.contains(point_to_check) << endl;
}

void CheckContain34(Circle2& c1)
{
	float x_check1, y_check1, x_check2, y_check2;

	cout << "Please re-enter x1 for point_to_check1: ";
	cin >> x_check1;

	cout << "Please re- enter y1 for point_to_check1: ";
	cin >> y_check1;
	Point2 point_to_check1(x_check1, y_check1);

	cout << "Please re-enter x2 for point_to_check2: ";
	cin >> x_check2;

	cout << "Please re- enter y2 for point_to_check2: ";
	cin >> y_check2;
	Point2 point_to_check2(x_check2, y_check2);

	Line2 line_to_check(point_to_check1, point_to_check2);
	cout << "contain " << line_to_check << ": " << boolalpha << c1.contains(line_to_check) << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
