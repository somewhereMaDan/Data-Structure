 #include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
  int arr[] = {10,12,16};
  cout << *arr << endl; // it de-reference the first element of array
  // arr is storing the address of 0th element

  int *ptr = arr; // now, the ptr stores the address of 0th element
  for (int i = 0; i < 3; i++)
  {
    cout << *ptr << endl; // de-referencing
    *ptr++; // it takes the memory after 4byte or you can say 1 unit

    // so at 0th element, after de-referencing the value 10 was printed
    // *ptr++ moves after 4 byte and finds and another integer 12

    cout << *(arr+i) << endl; // it moves the index like +0 at 0th element and +1 at 1th element
    // arr is an indexing pointer not an integer pointer

    // arr++; not allowed because it's a const pointer
  }
  return 0;
}
