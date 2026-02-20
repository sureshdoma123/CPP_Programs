#include <bits/stdc++.h>
using namespace std;
int main()
{
    array<double, 7> fareignTemp;
    for(int i=0; i<7; i++){
        cout << "Enter the Value: ";
        cin>>fareignTemp[i];
    }
    for(int i=0; i<7; i++)
    {
        cout << "Temperatur in Celecias for given Value is: " << (fareignTemp[i]-32)*5/9 << endl;
    }
    return 0;
}