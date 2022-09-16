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
  Node *temp = new Node();
  temp->data = data;
  temp->next = NULL;

  if (n == 1)
  {
    temp->next = head;
    head = temp;
    return;
  }
  Node *temp1 = head;
  for (int i = 0; i < n - 2; i++)
  {
    temp1 = temp1->next;
  }
  temp->next = temp1->next;
  temp1->next = temp;
}

void Delete(int position)
{
  Node *temp = head;
  for (int i = 0; i < position - 2; i++)
  {
    temp = temp->next;
  }
  Node *temp2 = temp->next;
  temp->next = temp2->next;
}

void traverse()
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
  Insert(2, 1);
  Insert(3, 2);
  Insert(4, 3);
  Insert(5, 4);
  Insert(6, 5);

  traverse();
  Delete(2);
  traverse();
  Delete(3);
  traverse();
  return 0;
}
