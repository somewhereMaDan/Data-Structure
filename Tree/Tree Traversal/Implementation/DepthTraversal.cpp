#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* Insert(Node* root,int data){
  Node* temp = new Node();
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;

  if (root == NULL)
  {
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

void inOrder(Node* root){
  if(root == NULL) return;
  
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void preOrder(Node* root){
  if(root == NULL) return;
  
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(Node* root){
  if(root == NULL) return;
  
  cout << root->data << " ";
  postOrder(root->left);
  postOrder(root->right);
}

int main(int argc, char const *argv[])
{
  Node* root = NULL;
  root = Insert(root, 17);
  root = Insert(root, 15);
  root = Insert(root, 11);
  root = Insert(root, 10);
  root = Insert(root, 13);
  root = Insert(root, 30);
  root = Insert(root, 26);
  root = Insert(root, 32);
  root = Insert(root, 28);
  root = Insert(root, 27);

  cout << "inOrder traversal: " << endl;
  inOrder(root);
  cout << "\n";
  cout << "preOrder traversal: " << endl;
  preOrder(root);
  cout << "\n";
  cout << "postOrder traversal: " << endl;
  postOrder(root);
  
  return 0;
}


