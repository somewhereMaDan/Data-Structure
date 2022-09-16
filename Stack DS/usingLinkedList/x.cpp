#include<iostream>
using namespace std;

struct Node{
  int data;
  Node *next;
};

struct Node* top = NULL; // top is same as head in linked list, we are naming it top because it's stack

void Push(int x){
  Node* temp = new Node();
  temp->data = x;
  temp->next = top;
  top = temp;
}

void Pop(){
  struct Node* temp;
  if (top == NULL) return;
  temp = top;
  top = top->next;  
  delete(temp); // we are only using temp to delete the node, which was the top node so it there would not be any unused node in the stack
}

void Print(){
  struct Node* temp = top;
  while(temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void isEmpty(){
  if (top == NULL) cout << "Stack is empty" << endl;
  else cout << "Stack is not empty" << endl;
}

void TOP(){
  struct Node* temp = top;
  cout << temp->data << endl;
}

int main(int argc, char const *argv[])
{
  Push(1);
  Push(2); 
  Push(3); 
  Push(4); 
  Print();
  Pop();
  Print();
  TOP();
  isEmpty();
  return 0;
}

// LIFO - Last In First Out