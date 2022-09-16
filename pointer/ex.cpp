#include<iostream>
using namespace std;

void callByRef(int* x,int* y){
  *x = 12;
  *y = 20;
}

int main(int argc, char const *argv[])
{
  int a = 7;
  int *ap = &a;
  int b = 17;
  int *bp = &b;

  cout << "address of a: " << ap << endl; 
  cout << "address of a: " << bp << endl;

  callByRef(&a,&b);\

  cout << "a: " << a << endl;
  cout << "b: " << b << endl; 
  return 0;
}
