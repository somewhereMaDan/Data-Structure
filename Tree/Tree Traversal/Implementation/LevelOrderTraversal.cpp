
// When we are dequueing the element from the Queue, visit it and we
// are adding it's children to the Queue till the Queue is Empty
// And the tree is Displayed

#include <iostream>
#include <queue>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
};

Node *getnode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

Node *Insert(Node *root, int data)
{
  if (root == NULL)
  {
    root = getnode(data);
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

void LevelOrder(Node *root)
{
  if (root == NULL)
    return;
  queue<Node*> Q; // creating a queue of pointer to node
  // Q is storing the address of Queue, and the type is 'pointer variable'

  Q.push(root); // inserting the address of root node in the Queue

  // while there is at least one discovered node
  while (!Q.empty()) // Queue should not be empty
  {
    Node *current = Q.front(); // returns the front of the Queue and storing it in current('pointer to node')
    cout << current->data << " ";
    if (current->left != NULL)
      Q.push(current->left); // this is going to be 1st in the line
    if (current->right != NULL)
      Q.push(current->right); // this is going to be 2nd
    Q.pop();
  }
}

int main(int argc, char const *argv[])
{
  Node *root = NULL;
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

  LevelOrder(root);
  
  /*
                          17
                        /   \
                      15    30
                      /    /  \
                    11    26  32
                   /  \    \
                  10  13   28
                          /
                         27
  */
 
  return 0;
}
