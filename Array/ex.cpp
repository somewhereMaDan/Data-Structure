#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // int n;
  // cout << "size: " << endl;
  // cin >> n;
  cout << "row: " << endl;
  int row;
  cin >> row;
  cout << "colm: " << endl;
  int colm;
  cin >> colm;

  int arr1[row][colm];
  int arr2[row][colm];
  int addition[row][colm];

  cout << "one: " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cin >> arr1[i][j];
    }
  }
  cout << "two: " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cin >> arr2[i][j];
    }
  }

  cout << "add: " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      addition[row][colm] = arr1[i][j]+arr2[i][j]; 
      cout << addition[row][colm] << " ";
    }
    cout << endl;
  }
  
  
  
  
  return 0;
}
