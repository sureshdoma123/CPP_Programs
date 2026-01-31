#include <iostream>
using namespace std;

void threeTimesN(int input, int& output);

int main()
{
    int result = 0;

    cout << "Before Result is: "<< result << endl;

    threeTimesN(3, result);

    cout<< "After Result is: " << result << endl;

    return 0;
}

void threeTimesN(int input, int& output){
    output = input * 3;
}