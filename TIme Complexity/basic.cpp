#include <iostream>
using namespace std;

// int main(int argc, char const *argv[])
// {
//   int n;
//   cin >> n;
//   int a = 0;

//   for (int i = 1; i <= n; i++)
//   {
//      a = a + 1;
//   }
//   cout << a;  
  
//   return 0;
// }

// n

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  int a = 0;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      a = a + 1;
    }
  }
  cout << a;
  
  return 0;
}

// n square

// 20 10 100 238

// worst case, x = 238 
// searching whole 4 elements, or you can say n elements (n time)

// best case, x = 20
// compared only 1 time, constant time

// avg case, (1st comparision + 2nd comaprision + .... n comparision)/n
// sum of natural no. -> n(n+1)/2/n -> (n+1)/2 directly proportional to (n)
