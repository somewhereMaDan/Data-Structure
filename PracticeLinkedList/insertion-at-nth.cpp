#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
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
  for (int i = 0; i < n - 2; i++)
  {
    temp2 = temp2->next;
  }
  temp->next = temp2->next;
  temp2->next = temp;
}

void Print(){
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
  Node* head = NULL;
  insert(0,1);
  insert(1,2);
  insert(2,3);
  insert(3,4);
  Print();
  return 0;
}
