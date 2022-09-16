#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int a = 7;
  int* aptr;

  aptr = &a;
  // int* aptr = &a;
  
  cout << aptr << endl;

  cout << *aptr << endl;

  *aptr = 17;
  cout << a << endl;
  return 0;
}
