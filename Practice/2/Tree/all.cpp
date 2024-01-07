#include<bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  Node* left;
  Node* right;
};

Node* getNode(int data){
  Node* newNode = new Node();
  newNode->data = data;
  newNode->right = NULL;
  newNode->left = NULL;
  return newNode;
}

Node* Insert(Node* root, int data){
  if(root == NULL){
    root = getNode(data);
  }else if(data <= root->data){
    root->left = Insert(root->left, data);
  }else{
    root->right = Insert(root->right, data);
  }
  return root;
}

void display(Node* root){
  if(root != NULL){
    display(root->left);
    cout << root->data << " ";
    display(root->right);
  }
}

bool Search(Node* root, int data){
  if(root == NULL){
    return false;
  }
  if(root->data == data){
    return true;
  }else if(data <= root->data){
    return Search(root->left,data);
  }else{
    return Search(root->right,data);
  }
}

int mIn(Node* root){
  if(root == NULL){
    return -1;
  }
  while (root->left != NULL)
  {
    root = root->left;
  }
  return root->data;
}

Node* FindMin(Node* root){
  while (root->left != NULL)
  {
    root = root->left;
  }
  return root;
}

Node* Delete(Node* root, int data){
  if(root == NULL){
    return NULL;
  }
  else if(data < root->data){
    root->left = Delete(root->left,data);
  }else if(data > root->data){
    root->right = Delete(root->right,data);
  }else{
    
    // Case 1: No child 

    if(root->left == NULL && root->right == NULL){
      Node* temp = root;
      root = NULL;
      delete(temp);
    }

    // Case 2: 1 Child
    else if(root->left == NULL){
      Node* temp = root;
      root = root->right;
      delete(temp);
    }

    else if(root->right == NULL){
      Node* temp = root;
      root = root->left;
      delete(temp);
    }

    // Case 3: Two Child
    else{
      Node* temp = FindMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right, temp->data);
    }
  }
  return root;
}

bool checkBst(Node* root, int minValue, int maxValue){
  if(root == NULL){
    return true;
  }
  if(root->data >= minValue && root->data <= maxValue
  && checkBst(root->left, minValue, root->data)
  && checkBst(root->right, root->data, maxValue)){
    return true;
  }else{
    return false;
  }
}

bool isBinary(Node* root){
  if(root == NULL){
    return false;
  }
  return checkBst(root, INT32_MIN, INT32_MAX);
}

int main(int argc, char const *argv[])
{
  Node* root = NULL;
  root = Insert(root, 15);
  root = Insert(root, 10);
  root = Insert(root, 20);
  root = Insert(root, 30);

  display(root);

  cout << "\nMinimum element in the tree is:" << mIn(root) << endl;

  int data; cout << "Enter no. you want to search: " << endl; cin >> data;

  if(Search(root,data) == true){
    cout << "Element is found" << endl;
  }else{
    cout << "Elment not found" << endl;
  }

  int del; cout << "enter a no. you want to delete: " << endl; cin >> del;
  root = Delete(root,del);

  cout << "tree after deletion: "; display(root);

  if(isBinary(root) == true){
    cout << "\nis a binary tree" << endl;
  }else{
    cout << "not a binary tree" << endl;
  }

  return 0;
}

// if(root == NULL) return root;
        
//         invertTree(root->left);
//         invertTree(root->right);
//         TreeNode* temp = root->left;
//         root->left = root->right;
//         root->right = temp;
//         return root;
