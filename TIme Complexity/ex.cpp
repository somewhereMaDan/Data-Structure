#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  int a = 0, i = n;

  while (i>=1) // n -> n/2 -> n/4 ------ n/2^k >= 1
  {
    a = a + 1;
    i /= 2;
  }
  
  return 0;
}

// n/2^k >= 1, loop will continue till this is true,
// n >= 2^k
// log n >= k
// k <= log n
// O(log n)