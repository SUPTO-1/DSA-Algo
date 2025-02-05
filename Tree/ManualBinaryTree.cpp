#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
struct Node{
  int data;
  Node *left;
  Node *right;
  Node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};
void printTree(Node* root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<endl;
  printTree(root->left);
  printTree(root->right);
}
int main()
{
  Node* root = new Node(10);
  root->left = new Node(4);
  root->right = new Node(5);
  printTree(root);
}
