#include<iostream>
using namespace std;

int power(int n, int p){
  if (p == 0)
  {
    return 1;
  }

  int prevPower = power(n,p-1);
  return n*prevPower; // 4*1=4 , 4*4=16, 4*16=64 ...
}

int main(int argc, char const *argv[])
{
  int n,p; cin >> n >> p;
  cout << power(n,p) << endl;

  return 0;
}
