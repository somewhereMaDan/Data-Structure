#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int n,m;
  cin >> n >> m;
  int a = 0;

  for (int i = 1; i <= n; i++) // n times
  {
    for (int j = 1; j <= m; j++) // m times
    {
      a = a + 1; // this is running for (n*m) times
    }
  }
  cout << a << endl;
  for (int i = 1; i <= n; i++) // n times
  {
    a = a + 1;
  }
  
  cout << a << endl;
  
  return 0;
}

// time complexity of this program is : O((n*m) + n)