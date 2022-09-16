#include <iostream>
#define N 10
using namespace std;

// we are using circular arrays so that the memory will not be wasted after a dequeue

int arr[N];
int front = -1; // if front index is -1 then the list is empty
int rear = -1;
// int x;

// current position = i;
// next position = (i+1)%N;
// previous position = (i+N-1)%N; 

void isEmpty()
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

void isFull()
{
  if (rear == N - 1)
  {
    cout << "list is full" << endl;
  }
}

void enQueue(int x)
{
  if ((rear + 1) % N == front) // ,in picture ex-> (1+1)%10 .. 2%10 .. 2(index)==2(front), so it can't enqueue more elements in array
  {
    return; // this is a full case
  }
  else if (front == -1 && rear == -1)
  {
    front = 0;
    rear = 0; // in case the list is empty
  }
  else
  {
    // rear++;
    rear = (rear + 1) % N; // (9+1)%10 .. 10%10 .. 0, the next element will be placed at index 0
  }
  arr[rear] = x;
}

void deQueue()
{
  if (front == -1 && rear == -1)
  {
    cout << "queue is empty" << endl;
  }
  else if (front == rear)
  {
    front = -1;
    rear = -1;
  }
  else
  {
    front = (front + 1) % N; // (2+1)%10 .. 3
    // by using modulas it'll go in a circular manner
  }
}

void FRONT()
{
  if (front != -1)
  {
    cout << "\n" << "front is: " << arr[front] << endl;
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
  // enQueue(0);
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
  enQueue(11);

  print();
  cout << "\n";
  deQueue();
  deQueue();
  print();
  FRONT();
  isFull();
  isEmpty();

  return 0;
}

// current position = i;
// next position = (i+1)%N; for exmaple, we are at index 2 and N(no. of elements in array) = 10 -> (2+1)%10 .. 3%10 .. 3, it the next position
// previous position = (i+N-1)%N; for ex, we are at index 3 -> (3+(10-1)%10 .. (3+9)%10 .. 12%10 .. 2, is the previous element