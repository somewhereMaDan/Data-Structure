#include<iostream>
using namespace std;

// In Stack with using Linked list we have to push and pop the elements from the same side

struct Node{
  int data;
  Node* next;
};

Node* head = NULL;

void push(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
}

void pop(){
  Node* temp = head;
  head = temp->next;
}

void traverse(){
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  push(2);
  push(3);
  push(4);
  push(5);
  push(6);
  traverse();

  pop();
  traverse();

  return 0;
}
