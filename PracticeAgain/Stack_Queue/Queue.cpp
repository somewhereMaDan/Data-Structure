#include<iostream>
#define N 100
using namespace std;

int arr[N];
int front = -1;
int rear = -1;

void enqueue(int x){
  if ((rear + 1) % N == front)
  {
    cout << "Queue is full" << endl;
  }else if (front == -1 && rear == -1)
  {
    front = 0; 
    rear = 0;
  }else{
    rear = (rear + 1) % N; // increasing the index in a circular array
  }
  arr[rear] = x;
}

void dequeue(){
  if (front == -1 && rear == -1)
  {
    cout << "Queue is empty" << endl;
  }else if (front == rear)
  {
    front = -1;
    rear = -1;
    cout << "Queue is empty" << endl;
  }else{
    front = (front+1) % N; // when front gets increased by 1 index position, the previus index value is no longer in the Queue
  }
}

void Front(){
  cout << "THe element at front is: " <<  arr[front] << endl;
}

void print(){
  cout << "The elements are: " << endl;
  for (int i = front; i <= rear; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  enqueue(7);
  enqueue(8);
  enqueue(9);
  enqueue(1);
  print();
  dequeue();
  print();
  Front();
  print();

  return 0;
}
