// Fib(n) = Fib(n-1) + Fib(n-2)
// Fib(0) = 0     Fib(1) = 1

#include<iostream>
using namespace std;

int fibonacci(int n){
  if(n==0 || n==1) return n;

  return fibonacci(n-1) + fibonacci(n-2);
}

int main(int argc, char const *argv[])
{
  int n; cout << "nth fibonacci no: " << endl; cin >> n;
  cout << fibonacci(n);
  return 0;
}
