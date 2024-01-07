#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node* prev;
  Node* next;
};

Node* head = NULL;

Node* getNode(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->prev = NULL;
  temp->next = NULL;
  return temp;
}

void Insert(int data){
  Node* newNode = getNode(data);
  if(head == NULL){
    head = newNode;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  head = newNode;
}

void traverse(){
  Node* temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

void reverse(){
  if(head == NULL){
    return;
  }
  Node* temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  cout << "\nreverse: " << endl;

  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->prev;
  }
}

int main(int argc, char const *argv[])
{
  Insert(7);
  Insert(1);
  Insert(2);

  traverse();
  reverse();
  return 0;
}

