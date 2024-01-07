#include<iostream>
#define SIZE 100
using namespace std;

//                            BINARY SEARCH

int binarySearch(int arr[], int n, int key){
    int s = 0; // starting point is 0
    int e = n; // ending point is n

    while (s<=e) // if s>e then the element is not present in array
    {
        int mid = (s+e)/2;

        if (arr[mid] == key)
        {
            return mid;
        }else if (arr[mid] > key) // it means the element is in first half
        {
            e = mid - 1;
        }else if (arr[mid] < key) // it means element is in last half
        {
            s = mid + 1;
        }
    }
    return -1; // it means element is not in the array
}

int main(int argc, char const *argv[])
{
    int arr[40];
    int n;
    cout << "input the size of an array: " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;

    cout << binarySearch(arr,n,key);
    
    return 0;
}

//                            LINEAR SEARCH            

// int linear(int arr[], int size, int key){

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;   
// }

// // Time complexity is O(n), if we consider size as an n then the loop is running for n times that's why

// int main(int argc, char const *argv[])
// {
//     int arr[40];
//     int size, i, key;

//     cout << "Input the size of array: " << endl;
//     cin >> size;
    
//     for (i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
    
//     cout << "Input a key: " << endl;
//     cin >> key;

//     cout << linear(arr,size,key) << endl;

//     return 0;
// }
