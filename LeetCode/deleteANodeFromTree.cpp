#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* Insert(Node* root,int data){
  if(root == NULL){
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    root = temp; // storing the address of new node in root
  }
  else if(data <= root->data){
    root->left = Insert(root->left,data); // like here 
  }else{
    root->right = Insert(root->right,data);
  }
  return root; // Insert fucntion is returning root
}

Node* FindMin(Node* root){
  Node* temp = root;
  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  return temp;
}

Node* Delete(Node* root,int data){
  if(root == NULL) return root;
  else if(data < root->data){
    Delete(root->left,data);
  }else if(data > root->data){
    Delete(root->right,data);
  }else{

    // Case 1: No Child
    if(root->left == NULL && root->right == NULL){
      delete(root);
      root = NULL;
    }

    // Case 2: One Child 
    else if(root->left == NULL){
      Node* temp = root;
      root = root->right; // storing the address of the right-next node
      delete(temp);
    }else if(root->right == NULL){
      Node* temp = root;
      root = root->left; // storing the adderess of left-next node
      delete(temp);
    }

    // Case 3: Two Child
    else{
      Node* temp = FindMin(root->right);
      root->data = temp->data;
      root->right = Delete(root->right,temp->data); // it will lastly go into the case 1 and gets deleted
    }
  }
  return root;
}

bool IsUtil(Node* root, int minValue, int maxValue){
  if(root == NULL) return true;
  if(root->data >= minValue && root->data <= maxValue
  && IsUtil(root->left, minValue, root->data)
  && IsUtil(root->right, root->data, maxValue)){
    return true;
  }else{
    return false;
  }
}

bool IsBinary(Node* root){
  return IsUtil(root,INT32_MIN,INT32_MAX);
}

void InOrder(Node* root){
  if(root != NULL){
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
  }
}

bool Search(Node* root, int data){
  if(root->data == data) return true;
  else if(data <= root->data){
    return Search(root->left,data);
  }else if(data >= root->data){
    return Search(root->right,data);
  }else{
    return false;
  }
}

int main(int argc, char const *argv[])
{
  Node* root = NULL;
  root = Insert(root,2);
  root = Insert(root,1);
  root = Insert(root,4);
  root = Insert(root,7);
  root = Insert(root,4);
  root = Insert(root,8);
  root = Insert(root,3);
  root = Insert(root,6);
  root = Insert(root,4);
  root = Insert(root,7);
  // 2147483647

  if(IsBinary(root) == true){
    cout << "The tree is a Binary Tree" << endl;
  }else{
    cout << "The tree is not a Binary Tree" << endl;
  }

  InOrder(root);
  int n; cout << "\nEnter a element to search: " << endl; cin >> n;
  if(Search(root,n) == true){
    cout << "The element is found";
  }
  else{
    cout << "Element was not found";
  }

  int z; cout << "\nEnter a element to delete: " << endl; cin >> z;
  root = Delete(root,z);

  cout << "Tree after Deletion: " << endl;
  InOrder(root);
  cout << endl;


  return 0;
}
