#include<iostream>
using namespace std;

// we can implement stack using linked list when we are inserting and deleting from the same direction

struct Node{
  int data;
  Node* next;
};

struct Node* head;

void push(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
}

void pop(){
  Node* temp = head;
  head = temp->next;
  delete(temp);
}

void Print(){
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp ->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  head = NULL;
  push(2);
  push(4);
  push(6);
  push(8);
  push(10);
  Print();
  pop();
  pop();
  Print();
  return 0;
}
