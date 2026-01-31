#include<bits/stdc++.h>
using namespace std;

int productOfAnArray(array<int, 6> arr);

void productOfAnArrayByReference(array<int, 6> arr, int& product);
 
int main()
{

    array<int, 6> myarray = {1,2,3,4,5,6};
    int array_product = 1;

    cout <<"Product of an array is: " << productOfAnArray(myarray) << endl;

    cout << "Before calling productOfAnArrayByReference() array_product value is: "<< array_product<< endl;
    
    productOfAnArrayByReference(myarray, array_product);

    cout <<"After calling productOfAnArrayByReference() array_product value is: " << array_product << endl;

    return 0;
}

int productOfAnArray(array<int, 6> arr){
    long product = 1;
    for(auto it: arr)
    {
        product = product * it;
    }
    return product;
}

void productOfAnArrayByReference(array<int, 6> arr, int& product)
{
    for(auto it: arr)
    {
        product *= it;
    }
}