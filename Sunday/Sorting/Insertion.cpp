#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cout << "Enter the size of array: " << endl;
  cin >> n;

  int arr[n];

  cout << "Enter the elements in array: " << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = 1; i < n; i++)
  {
    int key = arr[i];
    int j = i - 1;

    while (j>=0 && arr[j] > key)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j+1] = key;
  }

  cout << "Elements in arary are: " << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  
  
  return 0;
}
