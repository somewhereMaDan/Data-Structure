#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // reapetedly swap two adjacent elements if they are in wrong order
  // like Left > Right is wrong
  // maximum elements gets in the right position

  // like if we have 6 elements in an array we have to iterate 5 time
  // likewise, in n elements we have to iterate n-1 times

  // 1st iteration -> we are checking till, n-1
  // 2nd iteration -> n-2

  //                    i'th iteration -> n-i

  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int counter = 1;

  while (counter < n)
  {
    for (int i = 0; i < n - counter; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    counter++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
