#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
  Node* prev;
};

Node* head = NULL;

Node* getNewNode(int data){
  Node* newNode = new Node();
  newNode->data = data;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

void Insert(int data){
  Node* newNode = getNewNode(data);
  if(head == NULL){
    head = newNode;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  head = newNode;
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

void reverse(){
  Node* temp = head;
  if(head == NULL) return;

  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  cout << "Reverse Doubly Linked List: " << endl;
  
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->prev;
  }
  cout << "\n";
}

void InsertAtTail(int data){
  Node* newNode = getNewNode(data);
  if(head == NULL){
    head = newNode;
    return;
  }
  Node* temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  newNode->prev = temp;
  temp->next = newNode;
}

int main(int argc, char const *argv[])
{
  Insert(2);
  Insert(3);
  Insert(4);
  Insert(5);

  print();
  reverse();

  InsertAtTail(7);
  print();
  return 0;
}

