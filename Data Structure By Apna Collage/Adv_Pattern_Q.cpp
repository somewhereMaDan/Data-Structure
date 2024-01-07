#include <iostream>
using namespace std;

int main()
{

    // //            Inverted pattern using numbers 

    // // Row : 1 to n
    // // Column : n+1-Row no.
    // // Printing column no.

    // int n;
    // cout << "Input a number: " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n+1-i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //                      0 - 1 Pattern

    // rows: 1 to n
    // column: 1 to row no.
    // element: Row no. + Col no. (Even -> 1) and (odd -> 0)

    // int n;
    // cout << "Enter a number: " << endl;
    // cin >> n;

    
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i+j)%2 == 0)
    //         {
    //             cout << "1" << " ";
    //         }else if((i+j)%2 != 0)
    //         {
    //             cout << "0" << " ";
    //         }
    //     }
    //     cout << endl;
    // }

    //                   Rhombus Pattern

    // rows: 1 to n
    // column : n-row no.  and 1 to n

    // int n;
    // cout << "Enter a number: " << endl;

    // cin >> n;

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n-i; j++){
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= n; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl; 
    // }

    //                    Number Pattern

    // rows: 1 to n
    // Columns: n - rowNo. // 1 to RowNo.

    // int n;
    // cout << "Enter a number: " << endl;

    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int  j = 1; j <= n - i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    //                    Palendromic Pattern

    // Rows: 1 to n
    // Column: for space - (1 to n-rowNo.), 
    // For decreasing order -> k = rowNo. (k--) (n-RowNo. to n)
    // For increasing order -> k = 2 (k++) (n to n+rowNo. - 1)

    // int n;
    // cout << "Input a number: " << endl;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     int j;
    //     for (j = 1; j <= n-i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     int k = i;
    //     for (; j <= n; j++) // it will start from j = n-i
    //     {
    //         cout << k-- << " ";
    //     }
    //     k = 2;
    //     for (; j <= n+i-1; j++)
    //     {
    //         cout << k++ << " ";
    //     }
    //     cout << endl;
    // }

    //                        Star Pattern

    // Column: for " " -> 1 to n-i for "*" 1 to 2*i-1

    // int n;
    // cout << "Enter a number: " << endl;
    // cin >> n;

    // // For upper Part
    // for (int i = 1; i <= n; i++)
    // {
    //     int j;
    //     for (j = 1; j <= n-i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (j = 1; j <= 2*i-1; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    // // For lower part
    
    // for (int i = n; i >= 1; i--)
    // {
    //     int j;
    //     for (j = 1; j <= n-i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (j = 1; j <= 2*i-1; j++)
    //     {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }


    //                     Zig Zag Pattern

    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    for (int i = 1; i <=3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i+j)%4 == 0) || (i==2 && j%4 == 0))
            {
                cout << "* ";
            }else{
                cout << "  ";
            }
        }
        cout << endl;   
    }
}
