#include<iostream>
using namespace std;

// Find the minimun element in the unsorted array and swap it with the element at begining

int main(int argc, char const *argv[])
{
  int n;
  cout << "input the size: " << endl;
  cin >> n;
  int arr[n];

  cout << "input the array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n-1; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      if (arr[j]<arr[i])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}


