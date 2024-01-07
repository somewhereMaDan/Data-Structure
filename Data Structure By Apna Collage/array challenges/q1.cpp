// Given an array of a[] of size n. For every i from 0 to n-1
// out max(a[0],a[1],....a[i]).
// we want max of intex[0] then we want max of index[0] and index[1] and so on...
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    
    int mx = -19999999; //initializing a very small value
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, a[i]);
        cout << mx << endl;
    }
        
    return 0;
}
