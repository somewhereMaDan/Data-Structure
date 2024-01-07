#include<iostream>
#define SIZE 200
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[100];
    int n;
    cout << "Input the size of array: " << endl;
    cin >> n;

    cout << "Input " << n << " elements of array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int counter = 1;
    // we initialize counter value 1 cz if the size of the array is 2 then in only one time we can get sorted array
    // so we just need to go through loop once -> (1<2) it will go only once after that (2<2) won't be possible

    // the iteration should be (n-i) like n-1 
        while (counter<n) // the minimun iteration used is n-1
        {
            // if there is ith iteration we will check until i-1
            for (int i = 0; i < n-counter; i++)
            // we will check from index[0] to index [n-1] in case counter = 1
            // index[n-1] will be the last element of array beacuse if we take n = 4 then the index will up to 3
            {
                if (arr[i]>arr[i+1])
                {
                    // this is checking that the elemenmt on previous index is greater than next element 
                    // or not. like -> 14 11 (there is 14>11 so we will dive into if statement)
                    int temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
            counter++;
            // n - counter will get increased like -> n-1 to n-2 then n-3
        }
        cout << "Sorted array using bubble sort: " << endl;
        for (int i = 0; i < n; i++)
        {
            cout<< arr[i] << " ";
        }//cout << endl;
    return 0;
}
// why (n) was used in (counter<n)
// let's say if we take there (counter<n-1) then if we take the size of the array: 2 then,
// (counter<n-1) -> (1<1) is not true so loop will not executed.