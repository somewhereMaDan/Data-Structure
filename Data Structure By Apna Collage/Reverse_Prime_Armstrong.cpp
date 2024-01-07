#include <iostream>
// #include <cmath>
#include<math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // To find a prime no.

    int n;
    cin >> n;

    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            cout << "Non-Prime";
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "Prime";
    }
    return 0;
}

    // To reverse a number

//     int n;
//     cin >> n;

//     int reverse = 0;
//     while (n>0)
//     {
//         int lastDigit = n%10; // whatever the remainder comes it will be on ones place
//         reverse = reverse*10 +lastDigit;
//         n = n/10;

//     // First lastDigit variable will store the number which will be reminder from taken number(n)
//     // After that initial value of reverse is 0 then -> 0*10 + lastDigit = lastDigit
//     // Then n/10 so it will give like (if we have taken 1234) lastDigit is 4
//     // then 1234/10 = 123.4 and n will store int so it will store 123 and the process will continue
//     }
//     cout << reverse;
// }

// To check if a given no. is armstrong number or not
// 153 -> cube of 1=x, cube of 5=y and cube of 3=z (x+y+z) should be = 153

//     int n;
//     cout << "Enter a number to check if it is armstrong: " << endl;
//     cin >> n;

//     int sum = 0;
//     int Originaln = n;
//     while (n>0)
//     {
//     int lastDigit = n%10;
//     sum+= round(pow(lastDigit,3));
//     n=n/10;
//     }

//     if (sum==Originaln)
//     {
//         cout << "Armstrong number" << endl;
//     }
//     else{
//         cout << "Not an armstrong number" << endl;
//     }
// }


