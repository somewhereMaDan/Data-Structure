#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int a = 10;
  int* p = &a;

  cout << "Value of a: " << *p << endl;

  int** q = &p; // q is storing the address of p

  cout << "value of p, which is address of a: " << *q << endl; // de-referencing, and printing the value of p which is the address of a
  cout << "de-referencing twice and printing the value of a: " << **q << endl; // this will de-reference and go to value of p then again do de-referencing and go to the value of a 

  **q = 17; // modifying the value of a by de-referencing twice
  cout << a << endl;
  return 0;
}
