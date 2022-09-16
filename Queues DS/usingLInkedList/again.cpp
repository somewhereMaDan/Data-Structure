#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int data){
  struct Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;

  if (front == NULL && rear == NULL)
  {
    front = temp;
    rear = temp;
    return;
  }
  rear->next = temp;
  rear = temp;
}

void dequeue(){
  struct Node* temp = front;
  if (front == NULL) return;
  if (front == rear) // when there is only one node
  {
    front = NULL;
    rear = NULL;
  }
  else{
    front = front->next;
  }
  delete(temp); // it will delete the node which is no longet in the queue
}

void print(){
  struct Node* temp = front;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

// note - temp != NULL will traverse whole list
// but temp->next != NUll will traverse till before the temp->next will be NULL

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

// here we are enquing in the the last and dequeueing in the first