#include<iostream>
#define MAX_SIZE 100
using namespace std;

int arr[MAX_SIZE];
int top = -1;

void push(int x){
  if (top == MAX_SIZE-1)
  {
    cout << "Stack Overflow" << endl;
  }else{
    top++;
    arr[top] = x;
  }
}

void pop(){
  if (top == -1)
  {
    cout << "Stack Underflow" << endl;
  }else{
    top--;
  }
}

void TOP(){
  cout << "The element at top is: " << arr[top] << endl;
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
  push(7);
  push(7);
  print();
  pop();
  print();
  TOP();

  return 0;
}
