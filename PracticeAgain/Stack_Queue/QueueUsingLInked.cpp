#include<iostream>
using namespace std;

// The way to implement Queue using Linked List is to Insert and Delete from different side, also time-complexity should be constant 

struct Node{
  int data;
  Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enqueue(int x){
  Node* temp = new Node();
  temp->data = x;
  temp->next = NULL;

  if (front == NULL && rear == NULL)
  {
    front = temp;
    rear = temp;
  }
  rear->next = temp; // giving previous node link the address of new node
  rear = temp; // storing the new node address in rear for, when new Node comes
}

void dequeue(){
  Node* temp = front;
  if (front == NULL && rear == NULL) return;
  front = temp->next;
}

void print(){
  Node* temp = front;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  enqueue(2);
  enqueue(3);
  enqueue(4);
  print();
  dequeue();
  print();
  return 0;
}
