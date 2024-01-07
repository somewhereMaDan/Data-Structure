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

  cout << "addresss of a: " << &a << endl;
  cout << "address of a: " << ap << endl; 
  cout << "address of b: " << bp << endl;
  cout << "address of b: " << &b << endl;

  cout << "by call by value, a: " << a << endl;
  cout << "by call by value, b: " << b << endl;

  callByRef(&a,&b);

  cout << "by call by reference, a: " << a << endl;
  cout << "by call by reference, b: " << b << endl; 
  return 0;
}
