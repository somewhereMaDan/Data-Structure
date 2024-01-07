#include<iostream>
#define MAX_SIZE 101
using namespace std;


int arr[MAX_SIZE];
int top = -1; // initially the index does not exist

void push(int x){
  if(top == MAX_SIZE -1){
    cout << "Stack Overlflow" << endl;
  }
  else{
    top++;
    arr[top] = x;
  }
}

void pop(){
  if(top == -1){
    cout << "it's empty" << endl;
  }else{
    top--;
  }
}

void print(){
  for (int i = 0; i <= top; i++)
  {
    cout << arr[i] << " ";
  }
}

int main(int argc, char const *argv[])
{
  push(5);
  push(2);
  push(4);
  print();
  cout << "\n";
  pop();
  print();
  return 0;
}
