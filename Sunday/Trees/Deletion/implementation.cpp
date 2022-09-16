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

Node* FindMin(Node* root){
  while (root->left != NULL)
  {
    root = root->left;
  }
  return root;
}

Node* Delete(Node* root, int data){
  if(root == NULL) return root;
  else if(data < root->data){
    root->left = Delete(root->left,data);
  }
  else if(data > root->data){
    root->right = Delete(root->right,data);
  }
  else{

    // Case 1: No Child
    if(root->left == NULL && root->right == NULL){
      delete(root);
      root = NULL;
    }

    // Case 2: One Child
    else if(root->left == NULL){
      Node* temp = root;
      root = root->right;
    }
    else if(root->right == NULL){
      Node* temp = root;
    }

    // Case 3: Two Child
    else{
      Node* temp = FindMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right,temp->data); // temp->data is here beacuse we switched data with the node storing minimum data, 
      // and the minimum is accesed through temp->data

      // if you would use Delete(root->right,data), this would have Delete(400,15) and if you would do this the comparision of data would fail.
      // Like Delete(400,17)
    }
  }
  return root;
}
bool isUtil(Node* root,int minValue,int maxValue){
  if(root == NULL) return true; // base condition for recusion
  if(root->data >= minValue && root->data <= maxValue
  && isUtil(root->left,minValue,root->data)
  && isUtil(root->right,root->data,maxValue)){
    return true;
  }
  else{
    return false;
  }
}

bool IsBinaryTree(Node* root){
  return isUtil(root,INT32_MIN,INT32_MAX);
}
void inOrder(Node *root)
{
  if (root != NULL)
  {
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
  }
}

int main(int argc, char const *argv[])
{
  Node* root = NULL;
  root = Insert(root,12);
  root = Insert(root,5);
  root = Insert(root,15);
  root = Insert(root,3);
  root = Insert(root,7);
  root = Insert(root,13);
  root = Insert(root,17);
  root = Insert(root,1);
  root = Insert(root,9);

  inOrder(root);
  int n; cout << "\nEnter a element to delete: " << endl; cin >> n;

  Delete(root,n);
  inOrder(root);

  if(IsBinaryTree(root) == true){
    cout << "\nThe Tree is a BST" << endl;
  }else{
    cout << "\nThe Tree is not a BST" << endl;
  }
  return 0;
}
