#include <iostream>
#include <string>
#include "TemplateChallenge.h"

using namespace std;

int main()
{
	TemplateChallenge<int> intSwapper(1, 2);
	TemplateChallenge<string> stringSwapper("abc", "def");

	cout << "Before Swap for intSwapper: " << endl
		<< "\t" << intSwapper.getFirst()
		<< "\t" << intSwapper.getSecond() << endl;

	cout << "Before Swap for stringSwap: " << endl
		<< "\t" << stringSwapper.getFirst()
		<< "\t" << stringSwapper.getSecond() << endl;

	intSwapper.swap();
	stringSwapper.swap();

	cout << "After Swap for intSwapper: " << endl
		<< "\t" << intSwapper.getFirst()
		<< "\t" << intSwapper.getSecond() << endl;

	cout << "After Swap for stringSwap: " << endl
		<< "\t" << stringSwapper.getFirst()
		<< "\t" << stringSwapper.getSecond() << endl;

	cout << "Get Smaller in intSwapper: " << intSwapper.getSmaller() << endl;
	cout << "Get Smaller in intSwapper: " << stringSwapper.getSmaller() << endl;

	cout << "Get Bigger in intSwapper: " << intSwapper.getBigger() << endl;
	cout << "Get Bigger in intSwapper: " << stringSwapper.getBigger() << endl;


}