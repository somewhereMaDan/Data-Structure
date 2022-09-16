#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n; int position;
  cout << "size: " << endl;
  cin >> n;
  int arr[n];

  cout << "input elements: " << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "posititon: " << endl;
  cin >> position;

  if (position>=n)
  {
    cout << "not possible" << endl;
  }else{
    for (int i = position; i < n; i++)
    {
      arr[i] = arr[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
      cout << arr[i];
    }
  }
  return 0;
}
