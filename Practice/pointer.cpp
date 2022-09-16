#include<iostream>
using namespace std;

void fuc(int* x, int* y){
  *x = 10;
  *y = 11;
}

int main(int argc, char const *argv[])
{
  int a = 7;
  int b = 8;  

  fuc(&a,&b);

  cout << a << " " << b << endl;
  return 0;
}
