#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  // Insert an element from unsorted array to its correct position in sorted array,
  // correct position means left side should be less than that element and right side should be greateer than that

  // 40 20 60 70
  int n;
  cin >> n;
  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // 40 20 60 50
  for (int i = 1; i < n; i++)
  {
    int key = arr[i]; // key = 20
    int j = i - 1;    // j = 0

    while (arr[j] > key && j>=0)
    {
      arr[j + 1] = arr[j]; // arr[1] = arr[0]
      j = j - 1;
    }
    arr[j + 1] = key; // arr[0] = key
  }

  return 0;
}
