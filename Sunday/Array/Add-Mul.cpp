#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int row, colm;
  cout << "Enter the row of array: " << endl;
  cin >> row;
  cout << "Enter the colm of array: " << endl;
  cin >> colm;
  int arr[row][colm];
  int arr2[row][colm];

  int Addition[row][colm];
  int Multiply[row][colm];

  cout << "Enter elements for 1st array: " << endl;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cin >> arr[i][j];
    }
  }

  cout << "Enter elements for 2nd array: " << endl;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cin >> arr2[i][j];
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      Addition[i][j] = arr[i][j] + arr2[i][j];
    }
  }

  cout << "After performing Addition" << endl;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cout << Addition[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
