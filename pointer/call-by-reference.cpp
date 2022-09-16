#include<iostream>
using namespace std;

void area(int* x, int* y){
  *x = 4;
  *y = 5;
  int area = *x * *y;
  cout << "Area through call by reference: "  << area << endl;
} 

int main(int argc, char const *argv[])
{
  int a = 7;
  int b = 17;

  int Area = a*b;
  cout << "Area through call by value: " << Area << endl;

  area(&a,&b);
  return 0;
}

// void increment(int* x){
//   *x = *x + 1;
//   // *x++;
// }
// int main(int argc, char const *argv[])
// {
//   int a = 2;

//   int* aptr = &a;
//   increment(aptr);

//   cout << a << endl;
//   return 0;
// }
