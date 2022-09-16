#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

Node* head;

void Insert(int x){
  Node* temp = new Node();
  temp->data = x;
  temp->next = head;
  head = temp;
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
  Insert(7);  
  Insert(8);  
  Insert(9);
  print();

  return 0;
}
