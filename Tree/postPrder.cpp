#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
struct TreeNode{
  int data;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};
void postOrderTraversal(TreeNode* root)
{
  if(!root)return;
  stack<TreeNode*>st1,st2;
  st1.push(root);
  while(!st1.empty())
  {
    TreeNode* current = st1.top();
    st1.pop();
    st2.push(current);
    if(current->left)st1.push(current->left);
    if(current->right)st1.push(current->right);
  }
  while(!st2.empty())
  {
    cout<<st2.top()->data<<" ";
    st2.pop();
  }
}
int main()
{
  TreeNode* root = new TreeNode(3);
  root->left = new TreeNode(4);
  root->right = new TreeNode(5);
  root->left->left = new TreeNode(10);
  root->left->right = new TreeNode(12);
  postOrderTraversal(root);
}
