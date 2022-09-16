#include<iostream>
#define MAX_SIZE 101
using namespace std;

int arr[MAX_SIZE];
int top = -1; // the list is initially empty

void push(int element){
  if (top == MAX_SIZE-1)
  {
    cout << "stack overflow!" << endl;
  }else{
    top ++;
    arr[top] = element;
  }
}

void pop(){
  if (top == -1)
  {
    cout << "the list is  empty" << endl;
  }else{
    top--; // if we just decrease the indexing, we do not care about that block which is no more part of the stack
  }
}

void TOP(){
  cout << arr[top] << endl;
}

void print(){
  for (int i = 0; i <= top; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  push(2);
  push(3);
  push(4);
  push(56);
  print();

  pop();
  print();
  TOP();
  return 0;
}
