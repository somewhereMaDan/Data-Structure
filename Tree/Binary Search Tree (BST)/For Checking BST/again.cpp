#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* Insert(Node* root,int data){
  if (root == NULL)
  {
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    root = temp;
  }
  else if(data <= root->data){
    root->left = Insert(root->left,data);
  }
  else{
    root->right = Insert(root->right,data);
  }
  return root; 
}

void preOrder(Node* root){
  if(root != NULL){
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
  }
}

bool isUtil(Node* root, int minValue, int maxValue){
  if (root == NULL)
  {
    return true;
  }
  if(root->data >= minValue && root->data <= maxValue
  && isUtil(root->left,minValue,root->data) // after reaching the leaf node, the root of left will be NULL
  && isUtil(root->right,root->data,maxValue)){ // after reaching the leaf node, the root of right will be NULL, so it goes upward to check if there is a right node
    return true;
  }
  else{
    return false;
  }
}

bool IsBinary(Node* root){
  return isUtil(root, INT32_MIN, INT32_MAX);
}
int main(int argc, char const *argv[])
{
  Node* root = NULL;
  root = Insert(root, 7);
  root = Insert(root, 4);
  root = Insert(root, 9);
  root = Insert(root, 1);
  root = Insert(root, 6);

  preOrder(root);
  return 0;
}
