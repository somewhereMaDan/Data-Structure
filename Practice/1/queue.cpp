#include<iostream>
#define N 10
using namespace std;

int arr[N];
int front = -1;
int rear = -1;

void isEmpty(){
  if (front == -1 && rear == -1)
  {
    cout << "list is empty" << endl;
  }else{
    cout << "list is not empty" << endl;
  }
}

void isFull(){
  if (rear == N-1)
  {
    cout << "list is full" << endl;
  }else{
    cout << "list is not full" << endl;
  }
}

void enQueue(int element){
  if (rear == N-1)
  {
    cout << "Can't push, the list is full" << endl;
  }else if (front == -1 && rear == -1)
  {
    front = 0;
    rear = 0;
  }else{
    rear = (rear+1)%N;
  }
  arr[rear] = element;
}

void deQueue(){
  if (front == -1 && rear == -1)
  {
    cout << "can't pop, the list is empty" << endl;
  }else if (front == 0 && rear == 0)
  {
    front = -1;
    rear = -1;
  }else{
    front = (front+1)%N;
  }
}
void print()
{
  for (int i = front; i <= rear; i++)
  {
    cout << arr[i] << " ";
  }
}

int main(int argc, char const *argv[])
{
  isEmpty();
  enQueue(0);
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);
  enQueue(7);
  enQueue(8);
  enQueue(9);
  deQueue();
  deQueue();
  print();
  isFull();
  isEmpty();
  return 0;
}
// isEmpty
// isFull
// enQueue
// deQueue
// FRONT
// print