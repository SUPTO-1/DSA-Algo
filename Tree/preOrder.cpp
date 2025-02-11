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
void preOrderTraversal(TreeNode* root)
{
  if(!root)return;
  stack<TreeNode*>st;
  st.push(root);
  while(!st.empty())
  {
    TreeNode* current = st.top();
    st.pop();
    cout<<current->data<<" ";
    if(current->right)st.push(current->right);
    if(current->left)st.push(current->left);
  }
}
int main()
{
  TreeNode* root = new TreeNode(3);
  root->left = new TreeNode(4);
  root->right = new TreeNode(5);
  root->left->left = new TreeNode(10);
  root->left->right = new TreeNode(12);
  preOrderTraversal(root);
}
