// Given a array a[] of size n. Output sum of each subarray of the given array
#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout << "input the size of array: " << endl;
    cin >> n;
    int a[n];
    
    cout << "input " << n << " elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int curr = 0;
    cout << "The sum of all subArrays are: " << endl;
    for (int i = 0; i < n; i++)
    {
        curr = 0; // whenever this nested loop get executed the value of curr
        // will be 0 so that we can add elements of next sub array
        for (int j = i; j <= n-1; j++)
        {
            curr += a[j];
            cout << curr << endl;
        }

    }
    // subarrays = n*(n+1)/2
    return 0;
}
