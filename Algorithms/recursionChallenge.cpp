#include<bits/stdc++.h>
using namespace std;


int factorial(int num);
void countDown(int num);

int main()
{
    int num = 5;

    cout<<"Factorial of number is: " << factorial(5) << endl;

    countDown(10);
 
    return 0;
}

int factorial(int num)
{
    if (num <= 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

void countDown(int num)
{
    if (num < 1) {
        return;
    }
    cout << "value: " << num << endl;
    return countDown(num - 1);
}