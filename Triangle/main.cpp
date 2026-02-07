#include "Triangle.h"
#include <iostream>
using namespace std;

int main()
{
	Triangle tri1;
	Triangle tri2(3.3423, 4.2352, 5.230);

	tri1.setSideA(1.124);
	tri1.setSideB(2.3243);
	tri1.setSideC(3.2324);

	/*cout << "Is Triangle1 is valid: " << (tri1.isValid() ? "true" : "false") << endl;
	cout << "Is Triangle2 is valid: " << (tri2.isValid() ? "true" : "false") << endl;*/

	//cout << "Triangle1 Permiter is: " << tri1.perimiter() << endl;
	//cout << "Triangle1 Area is: " << tri1.area() << endl;*/

	/*cout << "Triangle2 Permiter is: " << tri2.perimiter() << endl;
	cout << "Triangle2 Area is: " << tri2.area() << endl;*/

	tri1.printTrianlgeData();
	tri2.printTrianlgeData();

}