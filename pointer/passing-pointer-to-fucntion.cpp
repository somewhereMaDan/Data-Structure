#include<iostream>
using namespace std;

//                     ***CALL-BY-VALUE***
// void increment(int a){ // this a will get value 2
//   a++; // increment by 1
//   cout << "fucntion: " << a << endl; // 3
// }
// int main(int argc, char const *argv[])
// {
//   int a = 2;
//   increment(a);
//   cout << a << endl; // 2
//   return 0;
// }

// this is called     ***CALL-BY-REFERENCE***
// we are sending the variables by reference instead of giving value 

void swap(int* x, int* y){ // these are int pointers not variabl
  // x stores the address of a, and y stores of b
  // *x we can access the value of a 
  int temp = *x;
  *x = *y;
  *y = temp;
}

int main(int argc, char const *argv[])
{
  int a = 7;
  int b = 17;

  // can also be done like this
  // int* aptr = &a;
  // int* bptr = &b;

  // swap(aptr,bptr);

  swap(&a,&b);

  // we changed the value of a and by through de-referencing by address
  cout << "a: " << a << " " << "b: " << b;
  return 0;
}
