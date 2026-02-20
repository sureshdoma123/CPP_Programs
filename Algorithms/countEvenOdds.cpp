#include<bits/stdc++.h>
using namespace std;

int countEvens(int arr[], int size);

 
int main()
{
    int arr[] = {12,7,4,19,22,3,8,10};
    int result = countEvens(arr, 8);

    cout << "No of evens in array is: " << result << endl;
 
    return 0;
}

int countEvens(int arr[], int size)
{
    int evenCount = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]%2 == 0) {
            evenCount++;
        }
    }
    return evenCount;
}