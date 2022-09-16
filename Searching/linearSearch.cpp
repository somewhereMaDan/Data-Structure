#include<iostream>
using namespace std;

int LS(int arr[],int n, int key){
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    } 
  }
  return -1;
}
int main(int argc, char const *argv[])
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  
  int key;
  cin >> key;

  cout << LS(arr,n,key) << endl;
  return 0;
}