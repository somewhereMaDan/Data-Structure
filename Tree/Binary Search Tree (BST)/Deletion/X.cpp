/* Deleting a node from Binary search tree */
#include<iostream>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};
//Function to find minimum in a tree. 
Node* FindMin(Node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

// Function to search a delete a value from tree.
struct Node* Delete(struct Node *root, int data) {
  // initially, (200,15)
	if(root == NULL) return root; // which will be null if the condition is true
	else if(data < root->data) root->left = Delete(root->left,data);
	else if (data > root->data) root->right = Delete(root->right,data);
  // Execution of this 'Delete (350,15)' , will pause and go below
  // root->right will store 350 after deleting the Node, it was already 350 but it'll update again because now it won't have right child

	else {
		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			delete root;
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			struct Node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
		}
		// case 3: 2 children
		else { 
			struct Node *temp = FindMin(root->right); // finding the node which stores minimm value in right, in this case 17(address 400) which will get stored in current
			root->data = temp->data;  // 350->data = 400->data, 350->data this will store the value of it
			root->right = Delete(root->right,temp->data);
      // 350->right = Delete(350->right,17);
      // root->right = Delete(400,17);
      // (400,17) doesn't have a right of left subtree
      // so, Case 1 will return root which is NULL and it'll will get stored in root->right.
		}
	}
	return root;
}
 
//Function to visit nodes in Inorder
void InOrder(Node* root){

  if(root != NULL){
  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);
  }
}
 
// Function to Insert Node in a Binary Search Tree
Node* Insert(Node *root,char data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data)
		root->left = Insert(root->left,data);
	else 
		root->right = Insert(root->right,data);
	return root;
}

int main() {

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

	// Deleting node with value 17
	root = Delete(root,12);

	//Print Nodes in Inorder
	cout<<"\nInorder: ";
	InOrder(root);
	cout<<"\n\nIf The InOrder traversal of the tree is in Sorted Order, then it's surely Binary Search Tree (BST)";
  cout << "\n\n";
}