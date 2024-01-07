#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const int N = 1e6+2; // 10Pow6+2
    int idx[N];

    for (int i = 0; i < N; i++)
    {
        idx[i] = -1; // am just creating an array consisting elements -1
    }
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1){
            // whenever we visit the element([idx a[i]]) which is already updated from -1 to 
            // another element it means it got repeated. So it can be a potential answer

            minidx = min(minidx, idx[a[i]]);
            // from example we updated 2 in minidx but some elements after we get idx[a[i]] = 1 so we updated that.
        }else{
            idx[a[i]] = i;  // we are simply putting indexes in form of elements in idx(array)
            // we'll put index of given array into idx[N]
        }
    }
    if (minidx == INT_MAX) // -1 == -1
    { // if there is no element is repeating
        cout << "-1" << endl;
    }else{
        cout << minidx + 1 << endl;
    }
}
