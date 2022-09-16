#include<stdio.h>

int main(int argc, char const *argv[])
{
  int a = 7;
  int* p = &a;

  printf("Address of a: %d\n",p);
  printf("value of a: %d\n",*p);
  printf("size of int: %d\n",sizeof(int));
  printf("Address of p+1: %d\n",p+1); // this will takes us on the point where previous integer got finished, like after 4 address cz int requires 4bytes

  // if it's incremented by 2 it will get us after 8bytes
  
  printf("value at address p+1: %d\n", *(p+1));
  return 0;
}
