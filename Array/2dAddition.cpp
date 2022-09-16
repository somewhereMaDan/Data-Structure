#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int row, colm;
  cout << "enter row: " << endl;
  cin >> row;
  cout << "enter colm: " << endl;
  cin >> colm;

  int arr[row][colm];
  int arr2[row][colm];
  int addition[row][colm];
  int subtraction[row][colm];
  int multiplication[row][colm];
  int division[row][colm];

  cout << "enter elements for 1st array: " << endl;

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cin >> arr[i][j];
    }
  }

  cout << "\nenter elements for 2nd Array: " << endl;
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
      addition[i][j] = arr[i][j] + arr2[i][j];
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      subtraction[i][j] = arr[i][j] - arr2[i][j];
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      multiplication[i][j] = arr[i][j] * arr2[i][j];
    }
  }

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      division[i][j] = arr[i][j] / arr2[i][j];
    }
  }

  cout << "\nafter addition: " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cout << addition[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "\nafter subtraction: " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cout << subtraction[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "\nafter multiplication: " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cout << multiplication[i][j] << " ";
    }
    cout << "\n";
  }

  cout << "\nafter division: " << endl;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cout << division[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}
