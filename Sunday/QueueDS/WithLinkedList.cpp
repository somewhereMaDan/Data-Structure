#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* front = NULL;
Node* rear = NULL;

void enQueue(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;

  if(front == NULL && rear == NULL){
    front = rear = temp;
  }else{
    rear->next = temp; // previous node is storing the address of newly created node in it's link section
    rear = temp;
  }
}

void deQueue(){
  if(front == NULL && rear == NULL){
    return;
  }else if(front == rear){
    front = rear = NULL;
  }else{
    Node* temp = front;
    front = temp->next;
    delete(temp);
  }
}

void traverse(){
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
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(6);
  enQueue(7);

  traverse();

  deQueue();
  traverse();
  return 0;
}




































// #include<iostream>
// using namespace std;

// // In Queue with using Linekd List, we have to make sure we enQueue and deQueue from different sides.
// // Like here we'll enQueue from rear and deQueue from front of the List, also we have to do this in Constant time
// struct Node{
//   int data;
//   Node* next;
// };

// Node* front = NULL;
// Node* rear = NULL;

// void enQueue(int data){
//   Node* temp = new Node();
//   temp->data = data;
//   temp->next = NULL;

//   if(front == NULL && rear == NULL){
//     front = rear = temp; // giving the address of the new node
//     return;
//   }
//   rear->next = temp;
//   rear = temp;
// }

// void deQueue(){
//   if(front == NULL && rear == NULL){
//     return;
//   }
//   else if(front == rear){
//     front = rear = NULL;
//   }else{
//     Node* temp = front;
//     front = temp->next;
//     delete(temp);
//   }
// }

// void traverse(){
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
//   enQueue(2);
//   enQueue(3);
//   enQueue(4);
//   enQueue(6);
//   enQueue(7);

//   traverse();

//   deQueue();
//   traverse();
//   return 0;
// }
