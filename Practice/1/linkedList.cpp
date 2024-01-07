#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node* next;
};

struct Node* head = NULL;

void insert(int newData){
  struct Node* temp = new Node();
  temp->data = newData;
  temp->next = head;
  head = temp;
}

void traverse(){
  struct Node* temp1;
  temp1 = head;

  cout << "Linked list: " << endl;
  while (temp1 != NULL)
  {
    cout << temp1->data << " ";
    temp1 = temp1->next;
  }
}

int main(int argc, char const *argv[])
{
  insert(2);
  insert(7);
  insert(9);
  traverse();
  return 0;
}

