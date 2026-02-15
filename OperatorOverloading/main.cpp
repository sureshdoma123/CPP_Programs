#include "Rectangle.h"
#include <iostream>

using namespace std;

int main(){
    Rectangle r1(10,20);
    Rectangle r2(20,30);
    Rectangle r3(10,20);
    Rectangle result;

    cout << "r1 == r3 ? " << boolalpha << (r1 == r3) << endl;
    cout << "r1 != r2 ? " << boolalpha << (r1!=r1)<<endl;
    result = r1 + r2;
    cout << "r1 + r3 = " << result.getLength() << ", " << result.getWidth() << endl;
    cout << "r1 < r2 ? " << boolalpha << (r1 < r2) << endl;

    return 0;
}