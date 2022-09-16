#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int row, colm;
  cout << "enter size: " << endl;
  cin >> row >> colm;

  int arr[row][colm];

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cin >> arr[i][j];
    }
  }
  
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      cout << arr[i][j] << " ";
    }
    cout << "\n";
  }

  int x;
  cout << "Enter element you want to find: "<< endl;
  cin >> x;
  bool flag = false;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < colm; j++)
    {
      if (arr[i][j] == x)
      {
        cout << "row: " << i << " colm: " << j << " ";
        flag = true;
      }
    }
  }
  if (flag == true)
  {
    cout << "\nelement was found" << endl;
  }else if(flag == false){
    cout << "element was not found" << endl;
  }
  
  return 0;
}
