#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle rect1;
	Rectangle rect2(12.5, 12.5);

	rect1.setLength(10.3432);
	rect1.setWidth(10.232);

	cout << "rect1 -> length: " << rect1.getLength() << " ,width: " << rect1.getWidth() << endl;
	cout << "Area of given rectangle 1 is: " << rect1.area() << endl;
	cout << "Permiter of given rectangle 1 is: " << rect1.permiter() << endl;

	cout << "rect2 -> length: " << rect2.getLength() << " ,width: " << rect2.getWidth() << endl;
	cout << "Area of given rectangle 2 is: " << rect2.area() << endl;
	cout << "Permiter of given rectangle 2 is: " << rect2.permiter() << endl;

	return 0;
}