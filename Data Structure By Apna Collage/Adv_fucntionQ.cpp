#include <iostream>
// #include <bits/stdc++.h>
using namespace std;

// Q.1 Sum of natural no. upto n

// int sum(int n){
//     int ans = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         ans = ans + i;
//     }
//     return ans;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     cout << sum(n) << endl;
//     return 0;
// }

// Q.2 To check the given triplet is a 
// pythagoria triplet or not

// bool check(int x,int y,int z){
//     int a = max(x, max(y,z));
//     int b,c;

//     if (a == x)
//     {
//         b = y;
//         c = z;
//     }else if (a == y)
//     {
//         b = x;
//         c = z;
//     }else if (a == z)
//     {
//         b = x;
//         c = y;
//     }
//     if(a*a == b*b + c*c){
//         return true;
//     }else
//     {
//         return false;
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int x,y,z;
//     cin >> x >> y >> z;

//     if (check(x,y,z))
//     {
//         cout << "Pythagorian Triplet" << endl;
//     }else
//     {
//         cout << "Not a pythagorian triplet" << endl;
//     }
//     return 0;
// }

//                  BINARY TO DECIMAL

// int binaryTodecimal (int n){
//     int answer = 0;
//     int x = 1;

//     while (n>0)
//     {
//         int y = n%10; // remainder will be stored in y
//         answer = answer + (x*y);
//         x = x * 2;
//         n = n / 10; 
//     }
//     return answer;
    
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     cout << binaryTodecimal(n) << endl;
//     return 0;
// }



// Octal decimal
// Base - 8 -> {0,1,2,3,4,5,6,7}
// representation : (x)down 8

// eg. (137)down 8
// Converting to decimal

// ( 1 3 8)down 8 = 7*8 power0 + 3*8 power 1 + 1*8 power2
//   2 1 0 
//                = 7 + 24 + 64
//                = (95)down 10
// Algorithm: traverse over the digits and make the decimal number.

//                      OCTAL DECIMAL

// int octalDecimal(int n){
//     int answer = 0;
//     int x = 1;

//     while (n>0)
//     {
//         int y = n%10; // remainder will be stored in y
//         answer = answer + (x*y);
//         x = x * 8; // difference between binary and octal is that in
//         // binary we use base is x = x * 2 but here we'll use x = x * 8
//         n = n / 10; 
//     }
//     return answer;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;
    
//     cout << octalDecimal(n) << endl;
//     return 0;
// }

// Hexadecimal to decimal
// base :16
// {0,1,2,3,4,5,6,..9,A,B,C,D,E,F}
// A = 10   D = 13
// B = 11   E = 14
// C = 12   F = 15

// eg (1CF)down 16
// converting to decimal
// (1CF)down16 = 1*16power2 + 12*16power1 + 15*16power0
//             = 256        + 192         + 15
//             = (463)down10

// ---same process as octal decimal and algorithm

//                 HEXADECIMAL TO DECIMAL


// int HEXADecimal(string n){
//     int ans = 0;
//     int x = 1;

//     int s = n.size(); // size of string
//     for (int i = s-1; i >= 0; i--)
//     {
//         if (n[i] >= '0' && n[i] <= '9')
//         {
//             ans = ans + x*(n[i] - '0');
//         }
//         else if (n[i] >= 'A' && n[i] <= 'F')
//         {
//             ans = ans + x*(n[i] - 'A' + 10);
//         }
//         x = x*16;
//     }
//     return ans;
    
// }

// int main(int argc, char const *argv[])
// {
//     string n;
//     cin >> n;
    
//     cout << HEXADecimal(n) << endl;
//     return 0;
// }


//                                      DECIMAL TO BINARY

// int deciamlToBinary(int n){
//     int x = 1;
//     int ans = 0;
    
//     while (x <= n){
//         x = x*2; // if x value become 8 and assume x is 10 then x*2 will be
//     }
//         // 16 so it is greater than x. so x = x/2 will give value of x again 8 so it won't be larger than n.
//         x = x/2;

//     while (x>0)
//     {
//         int lastDigit = n/x;
//         n = n - lastDigit*x;
//         x = x/2;
//         ans = ans*10 + lastDigit;
//     }
//     return ans;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     cout << deciamlToBinary(n) << endl;
//     return 0;
// }

void decimalToBinary(int n){
    // array to store binary
    int BinaryNum[32];

    // counting for binary array
    int i = 0;
    while (n >0)
    {
        BinaryNum[i] = n % 2;
        n = n/2;
        i++;
    }

    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--)
    {
        cout << BinaryNum[i];
    }
}
    
    int main(int argc, char const *argv[])
    {
        int n = 10;
        decimalToBinary(n);
        return 0;
    }


// Decimal to octal
// eg. (100)down 10 = (x)down 8
// (100)down 10 = 1*8power2 + 4*8power1 + 4*8power0
//              = (144)down 8 

// Algorithm : find the highest power of 8, from which
// our number will be divided and then we will write
// quotient on above ex is 100/64 -> the quotient
// is 1 so we written 1*8power2

// Decimal to hexadecimal
// --- same process as octal execpt of 8 here is 16