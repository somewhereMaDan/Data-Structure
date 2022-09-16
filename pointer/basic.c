#include<stdio.h>
int main(int argc, char const *argv[])
{
  int a = 7;

  // int *p; // pointer variable
  // p = &a; 

  int* p = &a; // it stores the value of a in p* and address in p 

  printf("Address of a: %d\n",p);

  printf("Value of a is: %d\n",*p);

  *p = 10; // derefrencing

  printf("After de-refrencing: %d\n",a);
  
}