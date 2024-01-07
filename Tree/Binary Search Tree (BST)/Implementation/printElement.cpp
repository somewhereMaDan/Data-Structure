#include<bits/stdc++.h>
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

bool Search(BSTnode *root, int data)
{
  if(root == NULL) return false;
  if (root->data == data)
    return true;
  else if (data <= root->data)
    return (root->left, data);
  else
  {
    return (root->right, data);
  }
}

void Display(BSTnode *root)
{
  if (root == NULL)
    return;
  cout << root->data << " ";
  Display(root->left); // first it'll print all elements of left subtree
  Display(root->right); // then it'll print elements of right
}

void MIn(BSTnode *root)
{
  if (root == NULL)
  cout << "tree is empty" << endl;
    return;
  BSTnode *temp = root;
  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  cout << "Minimum element in tree: " << temp->data << " \n";
}

void MAx(BSTnode *root)
{
  if (root == NULL)
    return;
  BSTnode *temp = root;
  while (temp->right != NULL)
  {
    temp = temp->right;
  }
  cout << "Maximum element in tree: " << temp->data << " \n";
}

int main(int argc, char const *argv[])
{
  BSTnode *root = NULL;
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
  // root = Insert(root, 15);
  // root = Insert(root, 10);
  // root = Insert(root, 20);
  // root = Insert(root, 25);
  // root = Insert(root, 5);
  // root = Insert(root, 30);

  Display(root);

  int n;
  cout << "\nEnter a number you want to search: " << endl;
  cin >> n;
  if (Search(root, n) == true)
  {
    cout << "Element found\n";
  }
  else
  {
    cout << "Element not found\n";
  }
  MAx(root);
  MIn(root);
  return 0;
}
