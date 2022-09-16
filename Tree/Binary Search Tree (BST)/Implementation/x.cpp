#include<iostream>
using namespace std;

// In BST, the left node have smaller data than the right node always.
struct BSTnode{
  int data;
  BSTnode* left;
  BSTnode* right;
};

// BSTnode* root = NULL; // Global Variable

// Funtion To create a new node in dynamic memmory or head
BSTnode* GetNewNode(int data){
  BSTnode* newNode = new BSTnode();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

// We are using recursion here 

BSTnode* Insert(BSTnode* root1, int data){ // we can also use BSTnode** root, here we are using pointer to pointer because root was already a pointer,
// and in order to get the address of root we have to use pointer to pointer 
  
  if (root1 == NULL) // empty tree
  {
    root1 = GetNewNode(data); // if the root is empty we're just giving the new node which we have created, with left 0 and right 0
  }
  else if (data <= root1->data) // if the data of new node is less than root node
  {
    root1->left = Insert(root1->left,data); // First this " Insert(root->left,data) " function will execute then it will return the address of new node, 
    // and it will be stored in the left section of root node(root->left).
  }
  else{
    root1->right = Insert(root1->right,data); // First this " Insert(root->right,data) " the function will execute then it will return the address of new node, 
    // and it will be stored in the right section of root node or (root->right).
    // like let's assume this " Insert(root->right,data) " fucntion will return address 300 and now it will get stored in root1->right or right section of the node
  }
  return root1; // returning the address of the root node
}

bool Search(BSTnode* root, int data){
  if (root == NULL) return false;
  else if(root->data == data) return true;
  else if(data <= root->data) return Search(root->left,data);
  else {
    return Search(root->right,data);
  }
}

int main(int argc, char const *argv[])
{
  BSTnode* root = NULL; // root is a pointer variable, and a local varible of main
  
  root = Insert(root, 15); // root is storing the address of new node which was created, like initially root was empty so Insert(0,15) this will create a new node, 
  // and let's assume the new node have address 200. that address will be now stored into root.

  root = Insert(root, 10); // now the root node have, data -> 10 and root->left or we can say it have the address of new node in left section 

  root = Insert(root, 20); // now the root node have, data -> 20 and root->right or we can say it have the address of new node in right section 

  int number;
  cout << "Enter a number to search: " << endl;
  cin >> number;
  if (Search(root,number) == true)
  {
    cout << "Element found\n";
  }else{
    cout << "Not found\n";
  }
  return 0;
}
