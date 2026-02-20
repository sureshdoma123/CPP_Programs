#include<bits/stdc++.h>
using namespace std;

double averageOfThree(double a, double b, double c);
 
int main()
{
    double result = averageOfThree(11.29478324, 22.3038572, 33.4325325245);

    cout <<" Average of three values is: " << result << endl; 
    return 0;
}

double averageOfThree(double a, double b, double c)
{
    return (a+b+c)/3;
}