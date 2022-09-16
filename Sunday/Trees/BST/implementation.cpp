#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node *Insert(Node *root, int data)
{
  if (root == NULL)
  {
    Node *temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;

    root = temp; // giving root the address of the newly created node
  }
  else if (data <= root->data)
  {
    root->left = Insert(root->left, data);
  }
  else
  {
    root->right = Insert(root->right, data);
  }
  return root;
}

void InOrder(Node *root)
{
  if (root != NULL)
  {
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
  }
}

bool Search(Node* root,int data){
  if(root == NULL) return false;
  else if(root->data == data) return true;
  else if(data <= root->data){
    return Search(root->left,data);
  }
  else{
    return Search(root->right,data);
  }
}

int main(int argc, char const *argv[])
{
  Node *root = NULL;
  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 25);

  InOrder(root);
  int n; cout << "\nEnter the element you want to search: " << endl; cin >> n;
  if(Search(root,n) == true){
    cout << "Element found\n";
  }else{
    cout << "Element not found\n";
  }
  return 0;
}
