#include <iostream>
#include <string>
#include <stack>
using namespace std;

void storeReverse(const string& originalString, stack<char>& reverseStack);
bool isPlaindrome(const string& originalString);
void printResult(const string& originalString);

int main() {
	string originalString;
	cout << "Enter a string/number you want to check it's palindrome or not: ";
	getline(cin, originalString);
	printResult(originalString);
	return 0;
}

void storeReverse(const string& originalString, stack<char>& reverseStack) {
	for (char c : originalString) {
		reverseStack.push(c);
	}

}

bool isPlaindrome(const string& originalString) {
	stack<char> reverseStack;
	storeReverse(originalString, reverseStack);
	for (char c : originalString) {
		if (c != reverseStack.top()) return false;
		reverseStack.pop();
	}
	return true;
}

void printResult(const string& originalString) {
	cout << "Is given " << originalString << " is palindrome ? " << boolalpha << isPlaindrome(originalString);
}
