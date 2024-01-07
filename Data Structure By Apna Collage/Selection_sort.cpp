#include <iostream>
#define SIZE 100
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[100];
    int n;

    cout << "Input the size of array: " << endl;
    cin >> n; // n is the size of array

    cout << "Input " << n << " elements of array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // we are here just checking if the next index is larger than the previous one
            // if yes then we are putting the next index value in previous one and vice-versa
            if (arr[j] < arr [i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "Sorted array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}
