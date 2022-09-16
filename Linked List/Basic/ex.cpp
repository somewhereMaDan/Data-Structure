#include<iostream>
using namespace std;

// inserting at the beginning of the list

struct Node{
  int data;
  struct Node *next;
};


struct Node *head = NULL;

void Insert(int newData){
  struct Node *temp = new Node();
  temp->data = newData;
  temp->next = head;
  head = temp;
}

void traverse(){
  struct Node *temp1 = head;
  while(temp1 != NULL){
    cout << temp1->data << " ";
    temp1 = temp1->next;
  }
}

int main(int argc, char const *argv[])
{
  Insert(3);
  Insert(1);
  Insert(7);
  Insert(2);
  Insert(7);

  cout << "The list is: ";
  traverse();
  return 0;
}
