#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* FindMin(Node* root){
  while (root->left != NULL)
  {
    root = root->left;
  }
  return root;
}

Node* Delete(Node* root, int data){
  if(root == NULL) return NULL;
  else if(data < root->data){
    root->left = Delete(root->left,data);
  }
  else if(data > root->data){
    root->right = Delete(root->right,data); // (200,15) will pause then, (350,15) will resume,.. and now the data is not <,or > than so it'll fall into Case 3 Since it have two child
  }
  else{
    // Case 1: No Child
    if(root->left == NULL && root->right == NULL){
      root = NULL;
      delete root;
    }

    // Case 2: One Child
    else if(root->left == NULL){
      Node* temp = root;
      root = root->right;
      // (100,7) we have to delete data = 7,
      // and there is no left child so, root = root->right
      // means root is going to store 730, and return root(730)
      // which will get stored in the right link of root(address 150)
      delete temp;
    }
    else if(root->right == NULL){
      Node* temp = root;
      root = root->left;
      delete temp;
    }
    // Case 3: Two Child
    else{
      Node* temp = FindMin(root->right); // here we would find the minimum vaLue in right which is 17 and the address of it will get stored in temp(400)
      root->data = temp->data; // now the data of root, address(350) will store the data of temp(address 400) value 17
      root->right = Delete(root->right,temp->data); // Delete(400,17), it will go through recursion in Case 1 where it doesn't have any left or right, 
      // and now it'll return NULL. Which will get stored in the right link of the root node(address 350); Now the data 15 is no longer in the tree
    }
  }
  return root;
}

Node* Insert(Node* root,int data){
  if(root == NULL){
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    root = temp;
  }
  else if(data <= root->data){
    root->left = Insert(root->left,data);
  }else{
    root->right = Insert(root->right,data);
  }
  return root;
}

void InOrder(Node* root){
  if(root != NULL){
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
  }
}

int main(int argc, char const *argv[])
{
  Node* root = NULL;
  
  root = Insert(root, 12);
  root = Insert(root, 5); // we are updating the root everytime we do some chamges, and root address will always stay the same
  root = Insert(root, 15);
  root = Insert(root, 3);
  root = Insert(root, 7);
  root = Insert(root, 13);
  root = Insert(root, 17);
  root = Insert(root, 1);
  root = Insert(root, 9);

  cout << "All elements in tree: " << endl;
  InOrder(root);
  int n; cout << "\nEnter a element to delete: " << endl; cin >> n;

  root = Delete(root,n);

  cout << "After deletion: " << endl;
  InOrder(root);
  return 0;
}
