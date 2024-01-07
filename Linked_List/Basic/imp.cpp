#include <iostream>
using namespace std;

struct Node
{
  int data;
  struct Node *next; // pointer to next node
};
struct Node *head = NULL; // pointer to head node

void insert(int newData) // function to insert a new node
{
  struct Node *temp = new Node(); // create a new node, and store the data in it
  temp->data = newData; // store the data in the new node
  temp->next = head; // store the address of the head node in the new node
  head = temp; // the address of new node is stored in head,

  // when the next times are called, the address of head will be stored in the link of new node
  // and the address of new node will be stored in the link of head node
  // that's why insertion is done in the reverse order, 
  // like the lastest node will be inserted in the first place.
}
void display()
{
  struct Node *temp1;
  temp1 = head;
  while (temp1 != NULL)
  {
    cout << temp1->data << " ";
    temp1 = temp1->next;
  }
}
int main()
{
  insert(3);
  insert(1);
  insert(7);
  insert(2);
  insert(9);
  cout << "The linked list is: ";
  display();
  return 0;
}