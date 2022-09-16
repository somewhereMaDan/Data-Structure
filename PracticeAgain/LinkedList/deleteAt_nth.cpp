#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* head;

void Insert(int newData, int n){
  Node* temp1 = new Node();
  temp1->data = newData;
  temp1->next = NULL;

  if (n == 1)
  {
    temp1->next = head;
    head = temp1;
  }else{
    Node* temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
      temp2 = temp2->next; // just traversing the list
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
  }
}

void toDelete(int position){
  Node* temp = head;
  if (head == NULL) return;
  
  if (position == 1)
  {
    head = temp->next; // head is storing the link of next node and if there is none it'll store NULL
    return;
  }
  for (int i = 0; i < position - 2; i++)
  {
    temp = temp->next;
  }
  Node* temp2 = temp->next;
  temp->next = temp2->next;
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
  Insert(7,1);
  Insert(8,2);
  Insert(9,3);
  print();
  toDelete(2);
  print();
  return 0;
}
