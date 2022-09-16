#include<iostream>
using namespace std;

// For using Stack we have to push and pop from the same size of the Linked List

struct Node{
  int data;
  Node* next;
};

Node* head;

void push(int x){
  Node* temp = new Node();
  temp->data = x;
  temp->next = head;
  head = temp;
}

void pop(){
  Node* temp = head;
  head = temp->next;
  delete(temp);
}

void print(){
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
  push(7);
  push(8);
  push(9);
  push(10);
  print();
  pop();
  print();
  pop();
  print();
  return 0;
}
