#include<iostream>
using namespace std;

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
  
  int position;
  cout << "position: " << endl;
  cin >> position;
  int value;
  cout << "value: " << endl;
  cin >> value;

  if (position>=n)
  {
    cout << "not possible" << endl;
  }else{
    for (int i = n; i < position; i++)
    {
      arr[i+1] = arr[i];
    }
    arr[position] = value;

    for (int i = 0; i < n; i++)
    {
      cout << arr[i];
    }
  }
  return 0;
}
