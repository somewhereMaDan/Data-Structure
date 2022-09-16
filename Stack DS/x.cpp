#include<iostream>
#define MAX_SIZE 101
using namespace std;

int arr[MAX_SIZE];
int top = -1; // initialy the list is empty, if the index is -1 the list is empty 

void push(int x){
  if (top == MAX_SIZE - 1)  // MAX_SIZE -1 == INDEX of array, so it can't increment the top more than top 
  {
    cout << "stack overflow" << endl;
  }else{
    top++;
    arr[top] = x;
  }
}

void pop(){
  if (top == -1)
  {
    cout << "list is empty" << endl;
  }else{
    top--;
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
  push(2); print();
  push(7); print();
  push(17); print();
  pop(); print();
  TOP(); 
  return 0;
}
