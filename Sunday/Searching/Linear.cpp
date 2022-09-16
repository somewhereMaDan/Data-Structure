#include<iostream>
using namespace std;

void LinearSearch(int arr[], int n, int key){
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      cout << "element found at index: " << i << endl;
    }
  }
}

int main(int argc, char const *argv[])
{
  int n;
  cout << "Enter the size of array: " << endl;
  cin >> n;
  int arr[n];

  cout << "Enter the elements of the array: " << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
  int key;
  cout << "Enter the element you want to find: " << endl;
  cin >> key;

  LinearSearch(arr,n,key);
  return 0;
}
