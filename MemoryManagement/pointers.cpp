#include <iostream>
using namespace std;

int main()
{
	double myDoubleVal = 3.14163;
	double* doubleValptr = &myDoubleVal;

	cout << "doubleValPtr address is: " << doubleValptr << endl <<
			"doubleValPtr value is: " << *doubleValptr << endl;

	return 0;
}