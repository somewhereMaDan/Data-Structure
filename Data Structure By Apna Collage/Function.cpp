#include<iostream>
#include<math.h>
// #include<stdc/bits.h++>
using namespace std;


// Challenge 1
// Write all prime numbers between two integers

/*
Example if we use temp = sqrt(n),where n is 25 then the value of temp is
5 so in below process it will check from 2 to 5 if anyone divides the int n 
*/

// bool isPrime(int num){
//     for (int i = 2; i <= sqrt(num); i++)
//     {
//         if (num%i == 0)
//         {
//             return false;
//         }
        
//     }
//     return true;
// }
// int main(int argc, char const *argv[])
// {
//     int a,b;
//     cout << "Enter starting no. to last no." << endl;
//     cin >> a >> b;

//     for (int i = a; i <= b; i++)
//     {
//         if (isPrime(i)==true)
//         {
//             cout << i << endl;
//         }
        
//     }
    
//     return 0;
// }

// Challenge 2
// Fibonacci Sequence to nth term

// void fibonacci(int a){
//     int t1 = 0;
//     int t2 = 1;
//     int nT;

//     for (int i = 1; i <= a; i++)
//     {
//         cout << t1 << endl;
//         nT = t1 + t2;
//         t1 = t2;
//         t2 = nT;
//     }
//     // return; In video it uses return but i don't know what it returns
    
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cout << "Input the sequence of fibonacci no. you want: " << endl;
//     cin >> n;

//     fibonacci(n);
//     return 0;
// }

// Challenge 3
// Factorial

// void fact (int a){
//     int factorial = 1;
//     for (int i = 2; i <= a; i++)
//     {
//         factorial = factorial * i;
//     }
//     cout << factorial << endl;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     fact(n);

//     return 0;
// }

// Challenge 4
// Binary Cofficient(nCr) -> nCr = n!/(n-r)! *  r!

// int fact (int a){
//     int factorial = 1;
//     for (int i = 2; i <= a; i++)
//     {
//         factorial = factorial * i;
//     }
//     return factorial;
// }
// int main(int argc, char const *argv[])
// {
//     int n,r;
//     cin >> n >> r;

//     int nCr = fact(n)/(fact(r)*fact(n-r));
//     cout << nCr << endl;
//     return 0;
// }

// Challenge 5
// Pascal Triangle

// int fact (int a){
//     int factorial = 1;
//     for (int i = 2; i <= a; i++)
//     {
//         factorial = factorial * i;
//     }
//     return factorial;
// }
// int main(int argc, char const *argv[])
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j<=i; j++)
//         {
//             cout << fact(i)/(fact(j)*fact(i-j)) << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }







