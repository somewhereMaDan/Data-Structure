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

bool checkBST(BSTnode* root, int minValue, int maxValue){
  if(root == NULL){
    return true;
  }if(root->data >= minValue && root->data <= maxValue 
  && checkBST(root->left,minValue, root->data)
  && checkBST(root->right,root->data, maxValue)){
    return true;
  }else{
    return false;
  }
}

bool ifBinary(BSTnode* root){
  if(root == NULL){
    return false;
  }
  return checkBST(root, INT32_MIN, INT32_MAX);
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

  if(ifBinary(root) == true){
    cout << "Is a bst" << endl;
  }else if(ifBinary(root) == false){
    cout << "not a bst" << endl;
  }
}