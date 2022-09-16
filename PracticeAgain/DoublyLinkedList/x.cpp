#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
  Node *prev;
};

Node *head = NULL;

void Insert(int newData)
{
  Node *newNode = new Node();
  newNode->data = newData;
  newNode->next = NULL;
  newNode->prev = NULL;

  if (head == NULL)
  {
    head = newNode;
  }
  else
  {
    head->prev = newNode; // previous link to address of new Node
    newNode->next = head; // next link of new node = head (address of head)
    head = newNode;       // head = address of NewNode
  }
}

void reverse(){
  Node* temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  cout << "reverse: " << endl;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->prev;
  }
  cout << "\n";
}

void InsertAtTail(int data)
{
  Node *temp = new Node();
  temp->data = data;
  temp->next = NULL;
  temp->prev = NULL;

  if (head == NULL)
    return;
  Node *temp1 = head;
  while (temp1->next != NULL)
  {
    temp1 = temp1->next;
  }
  temp->prev = temp1;
  temp1->next = temp;
}

void print()
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  Insert(2);
  Insert(3);
  Insert(4);
  print();
  InsertAtTail(7);
  Insert(1);
  print();
  reverse();
  return 0;
}
