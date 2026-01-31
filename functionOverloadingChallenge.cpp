#include <iostream>
#include <string.h>
using namespace std;

int getResult(int a, int b);
string getResult(string a, string b);
int getResult(int num);

int main()
{
    cout << "Integer addition getResult value is: " << getResult(2, 3) << endl;
    cout << "String concatenation getResult value is: " << getResult("Hello", "World!") << endl;
    cout << "Integer cube getResult value is: " << getResult(4) << endl;
    return 0;
}

int getResult(int a, int b){
    return a+b;
}

string getResult(string a, string b){
    return a + " " + b;
}

int getResult(int num){
    return num*num*num;
}