#include <iostream>
#include <stdexcept>
#include <iostream>
//#include <string>

using namespace std;

void doSomething(int num);
void processSomething(int num);
void executeSomething(int num);

int main()
{
	try {
		int input;
		cout << "Enter a number: ";
		cin >> input;
		doSomething(input);
	}
	catch (const exception& err) {
		cout << "main exception is called" << endl;
		cerr << err.what() << endl;
	}
	return 0;
}

void executeSomething(int num) {
	if (num < 100) {
		cout << "Given number is positive and less than 100" << endl;
	}
	else {
		cout << "executeSomething() exception is called" << endl;
		throw out_of_range("Number exceeded the limit 100");
	}
}

void processSomething(int num){
	try {
		if (num >= 0) {
			cout << "Possitive number received" << endl;
			executeSomething(num);
		}
		else {
			cout << "processSomething() exception is called" << endl;
			throw invalid_argument("Negative number received!");
		}
	}
	catch (const exception& error) {
		cout << "processSomething() exception is called" << endl;
		throw;
	}
	
}

void doSomething(int input){
	try {
		cout << "Do something is called" << endl;
		processSomething(input);
	}
	catch (const exception& err) {
		cout << "doSomething() exception is called" << endl;
		throw;
	}
}