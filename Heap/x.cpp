#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int a = 10; // stored in stack
  int *p = new int(); // allocate memory in heap
  *p = 10; // this will be pointed by p in heap, means in heap 10 will be stored which will point to p
  // this will act as global variable

  delete(p); // it deallocate memory from heap, this is important cz if we don't deallocate memmory from heap it will cause to memory leak
  // the memory which is allocated to us it will remove, but p(pointer) will be there, so it's called dangling pointer. it means there is no memory allocation
  // dangling pointer should not be there
  // there are two ways that we can re-use this or we'll have to remove this pointer from the stack also

  p = new int[4]; // now p will point to an array in heap

  delete[]p; // deleting the array in heap 
  p = NULL; // if we want to remove pointer
  return 0;
}
