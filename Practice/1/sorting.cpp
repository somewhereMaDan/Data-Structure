#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  //                                  BUBBLE SORT

  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int counter = 1;

  while (counter < n)
  {
    for (int i = 0; i < counter - 1; i++)
    {
      if (arr[i]>arr[i+1])
      {
        int temp = arr[i+1];
        arr[i+1] = arr[i];
        arr[i] = temp;
      }
    }
    counter++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
  































  //                                INSERTION SORT

  // int n;
  // cout << "input the size: " << endl;
  // cin >> n;
  // int arr[n];

  // cout << "input the array: " << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }

  // // 40 20 60 80
  // for (int i = 1; i < n; i++)
  // {
  //   int key = arr[i];
  //   int j = i-1; // j = 0

  //   while (j>=0 && key<arr[j])
  //   {
  //     arr[j+1] = arr[j];
  //     j = j-1;
  //   }
  //   arr[j+1] = key;
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  //                            SELECTION SORT

  // int n;
  // cout << "enter the size of array: " << endl;
  // cin >> n;
  // int arr[n];
  // cout << "elements: " << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> arr[i];
  // }

  // for (int i = 0; i < n - 1; i++)
  // {
  //   for (int j = i + 1; j < n; j++)
  //   {
  //     if (arr[j] < arr[i])
  //     {
  //       int temp = arr[j];
  //       arr[j] = arr[i];
  //       arr[i] = temp;
  //     }
  //   }
  // }
  // for (int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  return 0;
}
