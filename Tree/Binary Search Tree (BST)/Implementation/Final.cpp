#include<iostream>
using namespace std;

struct BSTnode
{
  int data;
  BSTnode *left;
  BSTnode *right;
};

BSTnode *getNode(int data)
{
  BSTnode *newNode = new BSTnode();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

BSTnode *Insert(BSTnode *root, int data)
{
  if (root == NULL)
  {
    root = getNode(data);
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

void display(BSTnode *root)
{
  if (root != NULL)
  {
    cout << root->data << " ";
    display(root->left);
    display(root->right);
  }
}

bool Search(BSTnode *root, int n)
{
  if (root == NULL)
    return false;
  if (root->data == n)
    return true;
  else if (n <= root->data)
    return Search(root->left, n);
  else
  {
    return Search(root->right, n);
  }
}

int Min(BSTnode* root){
  BSTnode* current = root; // creating a temprory varible to store the address of root node
  if(root == NULL){
    cout << "tree is empty" << endl;
    return -1;
  }
  while (current->left != NULL)
  {
    current = current->left;
  }
  cout << "Minimum element in Tree: ";
  return current->data;

  // return Max(root->data) 
  // we can also use recursion like this  
}

int Max(BSTnode* root){
  BSTnode* current = root; // creating a temprory varible to store the address of root node
  if(root == NULL){
    cout << "tree is empty" << endl;
    return -1;
  }
  while (current->right != NULL)
  {
    current = current->right;
  }
  cout << "Maximum element in Tree: ";
  return current->data;

  // return Max(root->data) 
  // we can also use recursion like this 

  // We could also do this without using and extra pointer variable 'current'
  // we can just use root cz it's a local variable inside this fucntion
}

int main(int argc, char const *argv[])
{
  // int a[4];
  BSTnode *root = NULL;
  root = Insert(root, 15);
  root = Insert(root, 10); // we are updating the root everytime we do some chamges, and root address will always stay the same
  root = Insert(root, 20);
  root = Insert(root, 40);

  display(root);

  int n;
  cout << "\nEnter a element to find: " << endl;
  cin >> n;
  if (Search(root, n) == true)
  {
    cout << "Element found\n";
  }
  else
  {
    cout << "Element not found\n";
  }
  cout << Min(root) << endl;
  cout << Max(root) << endl;
  
  return 0;
}
