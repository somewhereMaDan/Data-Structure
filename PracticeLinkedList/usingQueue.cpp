#include <iostream>
using namespace std;

// inserting at last and removing from first just like a queue
struct Node
{
  int data;
  Node *next;
};

Node *front;
Node *rear;

void enqueue(int data)
{
  Node *temp = new Node();
  temp->data = data;
  temp->next = NULL;

  if (front == NULL && rear == NULL)
  {
    front = rear = temp;
  }
  else
  {
    rear->next = temp;
    rear = temp;
  }
}

void dequeue()
{
  Node *temp = front;
  if (front == NULL)
    return;
  if (front == rear)
  {
    front = rear = NULL;
  }
  front = front->next;
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
  enqueue(5);
  print();
  dequeue();
  print();
  return 0;
}

// #include<iostream>
// using namespace std;

// // we cam use Queue using linked List but we have to insert and remove from different direction
// // in this case we'll dequeue from front and enqueue from rear, you can also assume this in vice-versa and do so
// // also there is one condition that we have to do it in constant time

// struct Node{
//   int data;
//   Node* next;
// };

// struct Node* front = NULL;
// struct Node* rear = NULL;

// void enqueue(int data){
//   Node* temp = new Node();
//   temp->data = data;
//   temp->next = NULL;

//   if (front == NULL && rear == NULL)
//   {
//     front = rear = temp; // the addres of the new node
//   }else{
//     rear->next = temp; // we are assigning the address of new node into the link of the last node in queue
//     rear = temp; // and then giving rear the address of new node
//   }
// }

// void dequeue(){
//   Node* temp = front;
//   if (front == NULL) return;
//   if(front == rear){
//     front = NULL;
//     rear = NULL;
//   }else{
//     front = front->next;
//   }
// }

// void print(){
//   Node* temp = front;
//   while (temp != NULL)
//   {
//     cout << temp->data << " ";
//     temp = temp->next;
//   }
//   cout << "\n";
// }

// int main(int argc, char const *argv[])
// {
//   enqueue(2);
//   enqueue(3);
//   enqueue(4);
//   print();
//   dequeue();
//   print();
//   return 0;
// }
