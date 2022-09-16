#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *next;
};

Node *head = NULL;

void Insert(int data, int n)
{
  Node *temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL;

  if(n == 0){
    temp1->next = head;
    head = temp1;
    return;
  }

  Node *temp2 = head;
  for (int i = 0; i < n - 2; i++)
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
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
  Insert(2,0);
  Insert(3,1);
  Insert(4,2);
  Insert(5,3);
  Insert(6,4);

  traverse();
  return 0;
}
