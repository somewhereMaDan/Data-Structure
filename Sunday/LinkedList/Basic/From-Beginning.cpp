#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* head = NULL;

void Insert(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->next = head;
  head = temp;
}

void traverse(){
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
  Insert(2);
  Insert(3);
  Insert(4);
  Insert(5);
  Insert(6);
  traverse();
  return 0;
}
