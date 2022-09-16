#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
};

struct Node* head;

void Insert(int data, int n){
  Node* temp1 = new Node();
  temp1->data = data;
  temp1->next = NULL;

  if (n == 1)
  {
    temp1->next = head;
    head = temp1;
    return;
  }
  Node* temp2 = head;
  for (int i = 0; i < n-2; i++)
  {
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}

void Deletion(int position){
  struct Node* temp1 = head;

  if (position==1)
  {
    head = temp1->next;
    delete(temp1);
    return;
  }
  for (int i = 0; i < position - 2; i++)
  {
    temp1 = temp1->next;
  }
  struct Node* temp2 = temp1->next;
  temp1->next = temp2->next;
  delete(temp2);
}

void print(){
  Node* temp = head;
  while (temp->next != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

int main(int argc, char const *argv[])
{
  // head = NULL;
  Insert(2,1);
  Insert(4,2);
  Insert(6,3);
  Insert(8,4);
  print();

  int n;
  cout << "enter position: " << endl;
  cin >> n;

  Deletion(n);  
  print();
  return 0;
}
