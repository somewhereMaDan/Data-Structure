#include <iostream>
#include<queue>
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

void LevelOrder(Node* root){
	if(root == NULL) return;
	queue<Node*>Q;

	Q.push(root);

	while (!Q.empty())
	{
		Node* current = Q.front();
		cout << current->data << " ";
		if(current->left != NULL){
			Q.push(current->left);
		}
		if (current->right != NULL)
		{
			Q.push(current->right);
		}
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
	return 0;
}
