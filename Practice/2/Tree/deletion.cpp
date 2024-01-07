#include<bits/stdc++.h>
using namespace std;

struct BSTnode{
  int data;
  BSTnode* left;
  BSTnode* right;
};

BSTnode* getNode(int data){
  BSTnode* newNode = new BSTnode();
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->data = data;
  return newNode;
}

BSTnode* insert(BSTnode* root, int data){
  if(root == NULL){
    root = getNode(data);
  }
  else if(data <= root->data){
    root->left = insert(root->left, data);
  }
  else{
    root->right = insert(root->right, data);
  }
  return root;
}

BSTnode* Delete(BSTnode* root, int data){
  if(root == NULL){
    return NULL;
  }
  else if(data < root->data){
    root->left = Delete(root->left, data);
  }else if(data > root->data){
    root->right = Delete(root->right,data);
  }else{
    // Case 1: No Node
    if(root->left == NULL && root->right == NULL){
      BSTnode* temp = root;
      root = NULL;
      delete(temp);
    }

    // Case 2: One Node
    else if(root->left == NULL){
      BSTnode* temp = root;
      root = root->right;
      delete(temp); 
    }
    else if(root->right == NULL){
      BSTnode* temp = root;
      root = root->left;
      delete(temp);
    }

    // Case 3: two node
    BSTnode* temp = FindMin(root->right);
    root->data = temp->data;
    root->right = Delete(root->right, temp->data);
  }
  return root;
}

BSTnode* FindMin(BSTnode* root){
  while(root->left != NULL){
    root = root->left;
  }
  return root;
}

void display(BSTnode* root){
  if(root != NULL){
    cout << root->data << " ";
    display(root->left);
    display(root->right);
  }
}

int main(){
  BSTnode* root = NULL;
  root = insert(root, 15);
  root = insert(root, 10);
  root = insert(root, 20);
  root = insert(root, 30);

  display(root);
}