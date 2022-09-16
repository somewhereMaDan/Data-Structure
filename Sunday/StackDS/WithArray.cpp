#include<iostream>
#define MAX_SIZE 100
using namespace std;

// In Stack we push and pop the elements from same direction 

int arr[MAX_SIZE];

int top = -1; // Initially, Stack is empty

void push(int data){
  if(top == MAX_SIZE - 1){
    cout << "Stack OverFlow" << endl;
    return;
  }
  top++;
  arr[top] = data;
}

void pop(){
  if(top == -1){
    cout << "Stack UnderFlow" << endl;
    return;
  }
  top--; // this will decrease the value of index so whatever value we had before it'll not be in stack anymore
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
  push(17);
  push(7);
  push(27);
  push(37);
  print();
  pop();
  print();
  return 0;
}
