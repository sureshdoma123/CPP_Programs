#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;


class CustomException : public runtime_error {
	public:
		CustomException() : runtime_error("This is Custom Exception error message") {}
		CustomException(string customMessage) : runtime_error(customMessage) {}
};

int main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	try {
		if (num >= 0) {
			cout << "Entered num is valid: "<< num << endl;
		}
		else {
			//throw CustomException();
			throw CustomException("Given number is Negative!");
		}
	}
	catch (const CustomException& err) {
		cerr << err.what() << endl;
	}
	return 0;
}