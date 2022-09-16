#include <iostream>
using namespace std;

// FIFO 
// here we are enqueueing in the the last and dequeueing in the first

struct Node
{
  int data;
  Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int data)
{
  struct Node *temp = new Node();
  temp->data = data;
  temp->next = NULL;

  if (front == NULL && rear == NULL)
  {
    front = temp;
    rear = temp;
    return;
  }
  rear->next = temp;  // temp = will have the address of the new node, which is going to store in the rear's next 
  rear = temp; // now rear will have the address of new node which is the last node in the queue
}

void dequeue(){
  struct Node* temp = front; // we are creating a temporary node to store the address of the first node in the queue, so we can free the memory of the first node after being dequeued
  if(front == NULL) return;
  if(front == rear){ // if there is only one node in the queue
    front = NULL;
    rear = NULL;
  }else{
    front = front->next;
  }
  delete(temp); // delete the node which is the first node in the queue
}

void print(){
  struct Node* temp = front;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;  
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  print();
  dequeue();
  print();
  return 0;
}
