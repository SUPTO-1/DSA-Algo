/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* DivideAndConquer(vector<int>&preorder,vector<int>&inorder,int &preIndex,int left,int right)
    {
        if(left>right)return nullptr;
        int val = preorder[preIndex++];
        TreeNode* root = new TreeNode(val);
        int index = 0;
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==val)
            {
                index = i;
            }
        }
        root->left = DivideAndConquer(preorder,inorder,preIndex,left,index-1);
        root->right = DivideAndConquer(preorder,inorder,preIndex,index+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex = 0;
        int left = 0;
        int right = preorder.size()-1;
        return DivideAndConquer(preorder,inorder,preIndex,left,right);
        //return root;
    }
};
