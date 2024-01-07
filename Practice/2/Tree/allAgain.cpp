#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node *left;
  Node *right;
};

Node* getNode(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

Node* findMin(Node* root){
  while(root->left != NULL){
    root = root->left;
  }
  return root;
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

Node* deletion(Node* root, int data){
  if(root == NULL){
    return NULL;
  }else if(data < root->data){
    root->left = deletion(root->left, data);
  }else if(data > root->data){
    root->right = deletion(root->right, data);
  }else{

    // Case 1 : No Child 
    if(root->left == NULL && root->right == NULL){
      Node* temp = root;
      root = NULL;
      delete(temp);
    }
    // Case 2: One child
    else if(root->left == NULL){
      Node* temp = root;
      root = root->right;
      delete(root);
    }

    else if(root->right == NULL){
      Node* temp = root;
      root = root->left;
      delete(root);
    }

    // Case 3: two Child
    else{
      Node* temp = findMin(root->right);
      root->data = temp->data;
      root->right = deletion(root->right, data); 
    }
  }
  return root;
}

bool Search(Node* root, int data){
  if(root == NULL){
    return false;
  }
  if(root->data == data){
    return true;
  }else if(data <= root->data){
    return Search(root->left, data);
  }else{
    return Search(root->right, data);
  }
}



void display(Node* root){
  if(root != NULL){
    display(root->left);
    cout << root->data << " ";
    display(root->right);
  }
}

int main(int argc, char const *argv[])
{
  Node* root = NULL;
  root = Insert(root, 1);
  root = Insert(root, 5);
  root = Insert(root, 3);
  root = Insert(root, 2);

  display(root);

  cout << "Enter a number you want to search: " << endl; int search; cin >> search;
  if(Search(root,search) == true){
    cout << "found" << endl;
  }
  else{
    cout << "not found" << endl;
  }
  cout << "Enter the number you want to delete: " << endl; int del; cin >> del;
  root = deletion(root, del);
  display(root);

  return 0;
}
