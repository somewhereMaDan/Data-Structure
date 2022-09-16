#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
  int low = 0;
  int high = n;
  
  while (low<=high)
  {
    int mid = (low+high)/2;
    
    if (arr[mid] == key)
    {
      return mid;
    }else if (arr[mid] < key)
    {
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  return -1;
}

int main(int argc, char const *argv[])
{
  int n;
  cout << "input size of array: " << endl;
  cin >> n;
  int arr[n];
  cout << "input a sorted array: " << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int key; 
  cout << "enter a key: " << endl;
  cin >> key;

  cout << BinarySearch(arr,n,key);

  return 0;
}
