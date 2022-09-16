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

bool IsBsUtil(Node *root, int minValue, int maxValue)
{
  if (root == NULL)
    return true; // base case for recursion, when the traversal of whole one side is done

  if (root->data >= minValue && root->data <= maxValue 
  && IsBsUtil(root->left, minValue, root->data) 
  && IsBsUtil(root->right, root->data, maxValue))
  {
    return true;
    // root->data : 7 , 4, 1
  }
  else
  {
    return false;
  }
}

bool IsBinarySearchTree(Node *root)
{
  return IsBsUtil(root, INT32_MIN, INT32_MAX);
}

void preOrder(Node *root)
{
  if (root != NULL)
  {
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
  }
}

int main(int argc, char const *argv[])
{
  Node *root = NULL;
  root = Insert(root, 7);
  root = Insert(root, 4);
  root = Insert(root, 9);
  root = Insert(root, 1);
  root = Insert(root, 6);

  preOrder(root);

  if(IsBinarySearchTree(root) == true){
    cout << "\nThe Tree is a BST";
  }else{
    cout << "The Tree is Not a BST";
  }
  return 0;
}

// bool IsSubtreeLesser(Node* root, int value){
//   if(root == NULL) return true;
//   if(root->data <= value && IsSubtreeLesser(root->left,value) &&
//   IsSubtreeGreater(root->right,value)){
//     return true;
//   }else{
//     return false;
//   }
// }
// bool IsSubtreeGreater(Node* root, int value){
//   if(root == NULL) return true;
//   if(root->data > value && IsSubtreeLesser(root->left,value) &&
//   IsSubtreeGreater(root->right,value)){
//     return true;
//   }else{
//     return false;
//   }
// }

// bool IsBinarySearchTree(Node* root){
//   if (root == NULL) return true;

//   if(IsSubtreeLesser(root->left,root->data) &&
//   IsSubtreeGreater(root->right,root->data) &&
//   IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right)){
//     return true;
//   }else{
//     return false;
//   }
// }