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
  
  if(n == 1){
    temp1->next = head;
    head = temp1;
    return;
  } 
  Node* temp2 = head;
  for(int i = 0; i < n-2; i++){
    temp2 = temp2->next;
  }
  temp1->next = temp2->next;
  temp2->next = temp1;
}
void Delete(int position){
  struct Node* temp1 = head; // temp1 = 100

  if (position==1)
  {
    head = temp1->next; // head = 100, so the node which had address 100 will get deleted 
    // or head = NULL in case there is only one node, so if the head will be NULL there will be no node in the list

    delete(temp1); // to free the space
    return; // for execution to stop here
  }
  for(int i = 0; i < position-2; i++){
    temp1 = temp1->next; // this will itereate once for (n=3), temp1 = 200
  }
  struct Node* temp2 = temp1->next; // temp2 = 150
  temp1->next = temp2->next; // temp1->next = 150 = temp2->next = 250

  // after assigning temp1->next to 250, the node which had address 150 will be deleted
  delete(temp2);
}

void Print(){
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
  Insert(2,1);
  Insert(4,2);
  Insert(6,3);
  Insert(5,4); // List: 2 4 6 5
  Print();

  int n;
  cout << "Enter the position: ";
  cin >> n;

  // Delete(n);
  // Print();

  return 0;
}
