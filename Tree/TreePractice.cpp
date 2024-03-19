#include<iostream>
#include<bits/stdc++.h>
#include<queue>
#include<vector>
#include<array>

using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* findMin(Node* root){
  Node* temp = root;
  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  return root;
}

Node* getNode(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
};

Node* Insert(Node* root,int data){
  Node* temp = getNode(data); // address of the node
  if(root == NULL){
    root = temp;
  }else if(data <= root->data){
    root->left = Insert(root->left, data);
  }else{
    root->right = Insert(root->right,data);
  }
  return root;
}

bool isUtil(Node* root, int minValue, int maxValue){
  if(root == NULL){
    return true; // Base condition for recursion, when the traversal for one whole side is done
  }
  if(root->data>=minValue && root->data<=maxValue
  && isUtil(root->left,minValue,root->data) // this function will return true when traversal of left whole side is done
  && isUtil(root->right,root->data,maxValue)){ // this function will return true when traversal of left whole side is done
  
  // and when these 3 condition are met it'll return true
    return true;
  }else{
    return false;
  }
}

bool CheckBST(Node* root){
  return isUtil(root,INT32_MIN,INT32_MAX);
}

vector<int> levelOrder(Node* root){
  vector<int> ans;
  if(root == NULL) return ans; // empty vector
  queue<Node*> q;

  q.push(root); // pushing the address of the root node

  while (!q.empty())
  {
    Node* curr = q.front(); // initially we're storing the address of root in curr (pointer variable).
 
    // cout << curr->data << " "; // we can't simpy print the value, we're going to store it in vector
    ans.push_back(curr->data); // storing the data at the end of the vector
    if(curr->right != NULL) q.push(curr->right);
    if(curr->left != NULL) q.push(curr->left);

    q.pop();
  }
  reverse(ans.begin(), ans.end());

  // 17 15 30 11 26 32 10 13 28 27 
  // 27 28 13 10 32 26 11 30 15 17 
  return ans;
}
// void levelOrder(Node* root){
//   if(root == NULL){
//     return;
//   }
//   queue<Node*> Q;

//   Q.push(root);

//   while (!Q.empty())
//   {
//     Node* current = Q.front();
//     cout << current->data << " ";
//     if(current->left != NULL){
//       Q.push(current->left);
//     }
//     if(current->right != NULL){
//       Q.push(current->right);
//     }
//     Q.pop();
//   }
// }

void preOrder(Node* root){
  // DLR
  if(root != NULL){
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
  }
}

bool Search(Node* root, int n)
{
  if (root == NULL)
    return false;
  if (root->data == n)
    return true;
  else if (n <= root->data)
    return Search(root->left, n);
  else{
    return Search(root->right, n);
  }
}

int minS(Node* root){
  Node* curr = root;
  if(root == NULL){
    return -1;
  }
  while (curr->left != NULL)
  {
    curr = curr->left;
  }
  cout << "Minimum element in tree: ";
  return curr->data;
}

int maxS(Node* root){
  Node* curr = root;
  if(root == NULL){
    return -1;
  }
  while (curr->right != NULL)
  {
    curr = curr->right;
  }
  cout << "Maximum element in tree: ";
  return curr->data;
}

Node* deleteNode(Node* root,int data){
  if(root == NULL){
    return root;
  }else if (data > root->data)
  {
    root->right = deleteNode(root->right,data);
  }else if(data < root->data){
    root->left = deleteNode(root->left,data);
  }else{
    
    // No Child
    if(root->left == NULL && root->right == NULL){
      root = NULL;
      delete(root);
    }
    
    // One Child
    else if(root->left == NULL){
      Node* temp = root;
      root = root->right; // we're storing the address of the right node 
      // in the root, so whatever node we wanted to delete we replaced it by right node address
      delete(temp);
    }else if(root->right == NULL){
      Node* temp = root;
      root = root->left;
      delete(temp);
    }

    // Two Child
    else{
      Node* temp = findMin(root->right);
      root->data = temp->data;
      root->right = deleteNode(root->right,data);
    }
  }
  return root;
}

int main(int argc, char const *argv[])
{
  Node* root = NULL;
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

  cout << "preOrder traversal: " << endl;
  preOrder(root);

  if(CheckBST(root) == true){
    cout << "\nTree is a BST" << endl;
  }else{
    cout << "\nTree is not a BST";
  }

  cout << "LevelOrder traversal: " << endl;
  // levelOrder(root); // when the return type is void

  // when the return type is vector
  vector<int> result = levelOrder(root);
  for(auto i : result){
    cout << i << " ";
  }
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

  int n; cout << "\nEnter the number you want to search: " << endl; cin >> n;
  if(Search(root,n) == true){
    cout << "Element is found" << endl;
  }else{
    cout << "Element is not found" << endl;
  }

  cout << minS(root) << endl;
  cout << maxS(root) << endl;

  int x; cout << "\nEnter element you want to delete from tree: " << endl; cin >> x;
  deleteNode(root,x);
  preOrder(root);

  // list<Node*> list1;
  // for(Node* curr : list1){
  //   cout << curr->data << " ";
  // }
  
  return 0;
}
