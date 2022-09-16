#include<iostream>
using namespace std;

// this is, inserting elements at the beginning

struct Node{
  int data;
  Node* next;
  Node* prev;
};

struct Node* head;

struct Node* GetNewNode(int x){
  struct Node* newNode = new Node();
  newNode->data = x;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

void insertathead(int x){
  struct Node* newNode = GetNewNode(x);
  if (head == NULL)
  {
    head = newNode;
    return;
  }
  head->prev = newNode;
  newNode->next = head;
  head = newNode;
}

void Print(){
  Node* temp = head;
  cout << "forward: " << endl;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

void reverse(){
  struct Node* temp = head;
  if (head == NULL) return;
  
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  cout << "reverse: " << endl;
  
  while (temp != NULL) // by IMAGE 400 != 0
  {
    cout << temp->data << " "; // by de-refrencing 400 we'll print the data of next node
    temp = temp->prev; // temp = 600 (temp->prev = 600)
    // so it will print the value by de-refrencing of previous node, by IMAGE
  }
  cout << "\n";
}

void InsertAtTail(int x){
  struct Node* newNode = GetNewNode(x);
  if (head == NULL)
  {
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
  head = NULL;
  insertathead(2);  
  insertathead(3);  
  insertathead(6);  
  Print();
  reverse();
  InsertAtTail(10);
  Print();
  return 0;
}
