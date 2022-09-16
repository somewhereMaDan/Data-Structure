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
    root = temp;
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

void preOrder(Node *root)
{
  if (root != NULL)
  {
    preOrder(root->left);
    cout << root->data << " ";
    preOrder(root->right);
  }
}

bool Search(Node* root,int data){
  if(root == NULL) return false;
  if(root->data == data) return true;
  else if(data <= root->data){
    return (root->left,data);
  }else{
    return(root->right,data);
  }
}

bool IsUtil(Node* root, int minValue, int maxValue){
  if(root == NULL) return true; // base condition for recursion where, root will be the leaf node

  if(root->data >= minValue && root->data <= maxValue
  && IsUtil(root->left,minValue,root->data)
  && IsUtil(root->right,root->data,maxValue)){
    return true;
  }else{
    return false;
  }
}

bool IsBinary(Node* root){
  return IsUtil(root,INT32_MIN,INT32_MAX);
}

int main(int argc, char const *argv[])
{
  Node *root = NULL;

  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 25);

  preOrder(root);

  int n; cout << "\nEnter the element you want to search: " << endl; cin >> n;
  if(Search(root,n) == true){
    cout << "Element found!\n";
  }else{
    cout << "Root not found!\n";
  }

  if(IsBinary(root) == true){
    cout << "The tree is a BST" << endl;
  }else{
    cout << "The tree is not a BST" << endl;
  }
  return 0;
}
