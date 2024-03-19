#include<iostream>
#include<vector>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

vector<int> levelOrder(Node* root){
  vector<int> ans; // vector to store elements of tree
  if(root == NULL) return ans; // empty vector

  queue<Node*>Q;
  Q.push(root); // enQueueing the root node in the queue

  while (!Q.empty())
  {
    root = Q.front();
    ans.push_back(root->data);
    // cout << curr->data << " ";

    if(root->right != NULL) Q.push(root->right);
    if(root->left != NULL) Q.push(root->left);
    
    Q.pop();
  }
  reverse(ans.begin(),ans.end());
  return ans;
}

Node* newNode(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;

  return(temp);
}

int main(int argc, char const *argv[])
{
  Node* root = newNode(1);
  root->left = newNode(2);
  root->right = newNode(3);
  root->left->left = newNode(4);
  root->left->right = newNode(5);
  root->right->left = newNode(6);
  root->right->right = newNode(7);

  vector<int> result = levelOrder(root);
  for(auto i: result){
    cout << i << " ";
  }
  /*
           1
         /   \
        2     3
       / \   / \
      4   5 6   7
  */
 
  return 0;
}
