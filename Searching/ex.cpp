#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
  int start = 0;
  int end = n;

  while (start <= end)
  {
    int mid = (start + end) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }
  return -1;
}
int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  int arr[n];

  cout << "input a sorted array: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key;
  cout << "key: " << endl;
  cin >> key;

  cout << binarySearch(arr, n, key);

  return 0;
}

// int linearSearch(int arr[],int n,int key){
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == key)
//     {
//       cout << "found" << endl;
//     }
//   }
//   return -1;

// }

// int main(int argc, char const *argv[])
// {
//   int n;
//   cin >> n;
//   int arr[n];

//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   int key;

//   cout << "key: " << endl;
//   cin >> key;

//   linearSearch(arr,n,key);

//   return 0;
// }
