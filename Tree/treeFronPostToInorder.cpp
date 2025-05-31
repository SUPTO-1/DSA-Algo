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
    TreeNode* DivideAndConquer(vector<int>&inorder,vector<int>&postorder,int &postIndex,int l,int r)
    {
        if(l>r)return nullptr;
        int value = postorder[postIndex--];
        TreeNode* root = new TreeNode(value);
        int index = 0;
        for(int i=0;i<inorder.size();i++)
        {
            if(inorder[i]==value)
            {
                index = i;
                break;
            }
        }
        root->right = DivideAndConquer(inorder,postorder,postIndex,index+1,r);
        root->left = DivideAndConquer(inorder,postorder,postIndex,l,index-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postIndex = inorder.size() - 1;
        int l = 0;
        int r = inorder.size() - 1;
        return DivideAndConquer(inorder,postorder,postIndex,l,r);
    }
};
