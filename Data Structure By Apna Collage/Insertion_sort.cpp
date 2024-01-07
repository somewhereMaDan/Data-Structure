#include<iostream>
#define SIZE 200
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[100];
    int n;
    cout << "input the size of array: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    // in insertion sort we start from 1
    // let's say we have an array [8,6,5,10,9] 
    {
        int key = arr[i]; // key = 6
        int j = i - 1; // j = 0 means j[0] = 8

        while (j >= 0 && arr[j] > key) // 8 > 6
        {
            arr[j+1] = arr[j];
            // a[1] = a[0] means 8 is going in the place of 6
            j = j - 1; // this will decrement j so we can put 6 into 8 place
            // you could also write j--;
            // j - 1 -> 0 - 1 = -1
        }
        arr[j + 1] = key;
        // j + 1 = -1 + 1 = 0
        // a[0] = key
        // a[0] = 6
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
