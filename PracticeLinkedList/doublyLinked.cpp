#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node* prev;
};

Node* head = NULL;

void insert(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;
  temp->prev = NULL;

  if (head == NULL)
  {
    head = temp;
  }else{
    head->prev = temp;
    temp->next = head;
    head = temp;
  }
}

void reverse(){
  Node* temp = head;
  if (head == NULL) return;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  cout << "Reverse: " << endl;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->prev;
  }
  cout << "\n";
}

void InsertAtTail(int x){
  Node* temp = new Node();
  temp->data = x;
  temp->next = NULL;
  temp->prev = NULL;

  if (head == NULL) return;
  Node* temp1 = head;
  while (temp1->next != NULL)
  {
    temp1 = temp1->next;
  }
  temp->prev = temp1;
  temp1->next = temp;
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
  insert(6);
  insert(4);
  insert(2);
  print();
  reverse();
  InsertAtTail(10);
  print();
  return 0;
}
