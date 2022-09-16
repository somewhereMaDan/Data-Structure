#include <iostream>
using namespace std;

// temp != NULL and temp->next != NULL, understant these two things

struct Node{
  int data;
  Node* next;
  Node* prev;
};

struct Node* head; // global variable -pointer to head node

struct Node* GetNewNode(int x){
  struct Node* newNode = new Node();
  newNode->data = x;
  newNode->next = NULL;
  newNode->prev = NULL;
  return newNode;
}

void InsertAtHead(int x){
  struct Node* newNode = GetNewNode(x); // the address of newNode is stored in newNode of this function
  if(head == NULL){
    head = newNode;
    return;
  }

  head->prev = newNode;
  newNode->next = head;
  head = newNode;
}

void print (){
   Node* temp = head;

  cout << "Forward: " << endl;
  while(temp != NULL){ 
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

void reverse(){
  struct Node* temp = head;

  if (temp == NULL) return; // list is empty
  
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  cout << "reverse: " << endl;

  // traversing back to first node using prev pointer
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->prev;
  }  
  cout << "\n";
}

void insertAtTail(int x){
  struct Node* newNode = GetNewNode(x);
  if(head == NULL){
    head = newNode;
    return;
  }
  Node* temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  newNode->prev = temp; 
  temp->next = newNode;

  // [x ,y, z] this is the newNode, temp has address 600 and newNode has address 800
  // [a. b. 0] -> [x ,y, z] ,assume this [a. b. c] node has address 600 and this has [x ,y, z] 800
  // [a, b, 800] -> [600, y, z]
  
}

int main(int argc, char const *argv[])
{
  head = NULL;
  InsertAtHead(2);  
  InsertAtHead(3);  
  InsertAtHead(6);  
  print();
  reverse();
  insertAtTail(10);
  print();
  return 0;
}
