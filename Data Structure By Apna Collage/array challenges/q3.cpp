#include<bits/stdc++.h>
using namespace std;

//                   For Better Understanding Check DS Word Docx
int main(int argc, char const *argv[])
{
    int n;
    // cout << "input the size of array: " << endl;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 2; // just initializing beacuse the minimun sub array is possible is of 2 element
    int pd = a[1] - a[0]; // next element - previes element = previous difference (initializing)
    int j = 2; // cz we have seen index[0] and inde[1] and subarray be of 2 elements so we can start after index[1]
    int curr = 2; // we are declaring current answer -> 2
    // because if we have subarray of 2 elements the difference between them is 1

    while (j<n)
    {
        if (pd == a[j] - a[j-1])
        {
            // then pd == 8 - 6
            // then, after pd(2) == 10 - 8 
            curr++;
            // so curr will be curr = 2+1 => 3
            // so curr = 3+1 => 4
        }
        else
        { 
            // you can check this if-else statement in word docx
            pd = a[j] - a[j-1];
            // 6-4 != 4-7 then, a[j] - a[j-1] => 6 - 4 means 2 will be stored in pd
            curr = 2;
        }
        // here we are taking maximum value between ans and curr
        ans = max(ans, curr);
        // here we are taking maximum from 2 and 4 
        // so 4 will be stored to ans
        j++;
    }
    
    cout << ans << endl;
    return 0;
}
