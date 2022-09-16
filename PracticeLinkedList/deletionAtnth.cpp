#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

struct Node* head;

void insert(int data, int n){
  Node* temp = new Node();
  temp->data = data;
  temp->next = NULL;

  if (n == 1)
  {
    temp->next = head;
    head = temp;
    return;
  }
  Node* temp2 = head;
  for (int i = 0; i < n-2; i++)
  {
    temp2 = temp2->next;
  }
  temp->next = temp2->next;
  temp2->next = temp;
}

void toDelete(int position){
  struct Node* temp = head;
  if (position == 1)
  {
    head = temp->next;
    delete(temp);
    return;
  }
  for (int i = 0; i < position -2 ; i++)
  {
    temp = temp->next;
  }
  Node* temp2 = temp->next;
  temp->next = temp2->next;
  delete(temp2);
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
  insert(5,1);
  insert(6,2);
  insert(7,3);
  insert(8,4);

  print();
  toDelete(2);
  toDelete(1);
  print();

  return 0;
}
