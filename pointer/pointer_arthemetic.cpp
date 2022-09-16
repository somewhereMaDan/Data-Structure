#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int a = 7;
  int* aptr = &a;

  cout << aptr << endl;
  aptr++;

  cout << aptr << endl;  
  return 0;
}
