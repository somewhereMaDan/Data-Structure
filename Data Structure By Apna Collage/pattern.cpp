#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Reactangle

    // int row, col;
    // cout << "Enter row and column: " << endl;
    // cin >> row>> col;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Hollow Rectangle pattern

    // int row, col;

    // cout << "Enter row and column: "<< endl;

    // cin >> row >> col;

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= col; j++){
    //         if (i==1 || i == row || j ==1 || j == col)
    //         {
    //             cout << "*";
    //         }else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << endl;     
    // }          

// Inverted Half Pyramid

//     int n;
//     cout << "Input numbers: " << endl;

//     cin >> n;

//     for (int i = n; i >= 1; --i)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
// }

// Pyramind Using numbers

//     int n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i;
//         }
//         cout << endl;
//     }
// }
    

// Half Pyramid After 180 degree rotation

//     int n;
//     cout << "Input numbers: " << endl;

//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j<=n-i)
//             {
//                 cout << " ";
//             }else{
//                 cout << "*";
//             }
//         }
//         cout << endl;
//     }
// }

// Floyd's triangle 

//     int n;
//     cin >> n;
//     int count = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }
// }

//                     Butterfly Pattern

// Space - (2*n-2*Row No.)
// Rows: 1 to n
// * = Row no.

// For down part
// Row : n to 1

   int n;
   cout << "Enter a number:" << endl;
   cin >> n;

   // For upper part: 
   for (int i = 1; i <= n; i++)
   {
       for (int j = 1; j <= i; j++)
       {
        cout << "*";
       }
       int space = 2*n-2*i;
       for (int j = 1; j <= space; j++)
       {
           cout << " ";
       }
       for (int j = 1; j <= i; j++)
       {
        cout << "*";
       }
       cout << endl;
    }    
    // For lower part:
       for (int i = n; i >= 1; i--)
       {
       for (int j = 1; j <= i; j++)
       {
        cout << "*";
       }
       int space = 2*n-2*i;
       for (int j = 1; j <= space; j++)
       {
           cout << " ";
       }
       for (int j = 1; j <= i; j++)
       {
        cout << "*";
       }
       cout << endl;
   }
}


