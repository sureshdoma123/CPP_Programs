#include <iostream>
#include <string>
using namespace std;

template<class T>
void print(T n) {
	cout << n << endl;
}

int main() {
	print<string>("Hello");
	print<int>(5);

	print("Hi there");

	return 0;
}
