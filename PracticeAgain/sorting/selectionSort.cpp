#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
  int n;
  cout << "Enter the size of the array: " << endl;
  cin >> n;

  int arr[n];
  cout << "Enter the array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < n-1; i++)
  {
    for (int j = i+1; j < n; j++)
    {
      if (arr[i] > arr[j])
      {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;  
      }
    }
  }

  cout << "The sorted array is: " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
  return 0;
}
