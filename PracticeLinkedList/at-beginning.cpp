#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* next;
};

struct Node* head = NULL;

void Insert(int x){
  struct Node* temp = new Node();
  temp->data = x;
  temp->next = head;
  head = temp;
}

void traverse(){
  Node* temp1 = head;
  
  while (temp1 != NULL)
  {
    cout << temp1->data << " ";
    temp1 = temp1->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  Insert(1);  
  Insert(2);  
  Insert(3);  
  Insert(4);
  traverse();  
  return 0;
}
