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
void inorderTraversal(TreeNode* root)
{
  cout<<"Inorder: ";
  stack<TreeNode*>st;
  TreeNode* current = root;
  while(current!=NULL || !st.empty())
  {
    while(current!=NULL)
    {
      st.push(current);
      current = current->left;
    }
    current = st.top();
    st.pop();
    cout<<current->data<<" ";
    current = current->right;
  }
}
int main()
{
  TreeNode* root = new TreeNode(3);
  root->left = new TreeNode(4);
  root->right = new TreeNode(5);
  root->left->left = new TreeNode(10);
  root->left->right = new TreeNode(12);
  inorderTraversal(root);
}
