#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
  int low = 0;
  int high = n;

  while (low <= high)
  {
    int mid = (low+high)/2;
    if (arr[mid] == key)
    {
      return mid;
    }else if(key < arr[mid]){
      high = mid - 1;
    }else{
      low = mid + 1;
    }
  }
  return -1;
}

int main(int argc, char const *argv[])
{
  int n;
  cout << "Enter the size of array: " << endl;
  cin >> n;
  int arr[n];

  cout << "Enter the elements of the array in sorted order: " << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int key;
  cout << "Enter the element you want to find: " << endl;
  cin >> key;

  cout << BinarySearch(arr,n,key);
  return 0;
}
