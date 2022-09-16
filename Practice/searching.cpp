#include <iostream>
using namespace std;

int binarySearch(int arr[], int key, int n)
{

  for (int i = 0; i < n; i++)
  {
    int low = 0;
    int high = n;

    int mid = (low + high) / 2;
    if (arr[mid] == key)
    {
      return mid;
    }
    else if (arr[mid] > key)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return -1;
}

int main(int argc, char const *argv[])
{
  int n;
  cout << "size: " << endl;
  cin >> n;
  int arr[n];

  cout << "elements: " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int key;
  cout << "key: " << endl;
  cin >> key;

  cout << binarySearch(arr, key, n) << endl;
  return 0;
}

// LINEAR SEARCH ->

// void linearSearch(int arr[], int key,int n){
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == key)
//     {
//       cout << "found at: " << i << endl;
//     }
//   }
// }
// int main(int argc, char const *argv[])
// {
//   int n,key;
//   cout << "size: " << endl;
//   cin >> n;
//   int arr[n];

//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   cout << "key: " << endl;
//   cin >> key;

//   linearSearch(arr,key,n);
//   return 0;
// }
