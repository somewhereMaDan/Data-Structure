#include <iostream>
using namespace std;

// Record breaker question
// the largest two element in array w.r.t some equations
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int a[n+1]; // we are using n+1 because we also have to check i+1
    a[n] = -1; // (n+1)th element a[i] > a[i+1] no. of visitors should be non-negative
    // a[n-1] > a[n]

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 1) // if n wasn't 2 in question(consecutive)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i+1])
        {
            ans++; // this is increasig the index
        }
        mx = max(mx,a[i]);
        // [1,2,0,7]
        // like it will change in max = 1 then mx = 2
    }
    cout << ans << endl;
    return 0;
}
// record breaking will be = 2 (output)
// in case of [1,2,0,7,2,0,2,2]
// in index = 1, the 2 is greater than 1 and 0
// in index = 3, the 7 is grater than mx which is 2 and greater than next element which is 2
