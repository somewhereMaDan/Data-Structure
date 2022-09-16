#include<iostream>
#define N 10
using namespace std;

// In Queue, we enQueue and deQueue from different position
// like here doing enQueue from rear and deQueue from front.
int arr[N];
int front = -1; // Initially these are empty
int rear = -1;


void IsEmpty(){
  if (front == -1 && rear == -1)
  {
    cout << "Queue is Empty" << endl;
  }
}

void IsFull(){
  if((rear+1)%N == front){
    cout << "Queue is Full" << endl;
  }
}

void enQueue(int data){
  if((rear+1)%N == front){
    return;
  }
  else if(front == -1 && rear == -1){
    front = 0;
    rear = 0;
  }else{
    rear = (rear+1)%N;
  }
  arr[rear] = data;
}

void deQueue(){
  cout << "After doing deQueue: " << endl; 
  if(front == rear ){
    front = rear = -1;
  }else if(front == -1 && rear == -1){
    return;
  }else{
    front = (front+1)%N; // increasing the index of front, so whatever value it had in the previous index is no longer in the stack
  }
}

void FRONT(){
  if(front != -1){
    cout << "Front of the Queue is: " << arr[front] << endl;
  }
}

void print(){
  for (int i = front; i <= rear; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  IsEmpty();
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);
  enQueue(7);
  enQueue(8);
  enQueue(9);
  enQueue(10);  
  enQueue(11);  // this element is not going to store

  print();
  FRONT();
  IsFull();

  deQueue();
  print();

  return 0;
}
