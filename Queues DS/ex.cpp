#include <iostream>
#define N 10
using namespace std;

int arr[N];
int front = -1;
int rear = -1;

void IsEmpty()
{
  if (front == -1 && rear == -1)
  {
    cout << "list is empty" << endl;
  }
  else
  {
    cout << "list is not empty" << endl;
  }
}

void IsFull()
{
  if (rear == N - 1)
  {
    cout << "list is full" << endl;
  }
}

void FRONT()
{
  if (front != -1)
  {
    cout << "\nFront is: " << arr[front] << endl;
  }
}

void enQueue(int x)
{
  if ((rear + 1) % N == front)
  {
    return;
  }
  else if (front == -1 && rear == -1) // for when the list is empty
  {
    front = 0;
    rear = 0;
  }
  else
  {
    rear = (rear + 1) % N;
  }
  arr[rear] = x;
}

void deQueue()
{
  if (front == -1 & rear == -1)
  {
    return;
  }
  else if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else
  {
    front = (front + 1) % N; // like if the front is 2, so whatever the value of front was at index 1 is now not in the list anymore, so we move the front to index 2
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
  IsEmpty();
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
  FRONT();
  IsFull();
  return 0;
}

// FIFO - First In First Out
