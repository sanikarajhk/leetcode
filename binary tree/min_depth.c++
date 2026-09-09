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
    int helper(TreeNode* root)
    {
        if(root==NULL) return 0;
        int left=1+minDepth(root->left);
        int right=1+minDepth(root->right);
        return min(left,right);

    }
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right!=NULL ) return 1+minDepth(root->right);
        if(root->right==NULL && root->left!=NULL) return 1+minDepth(root->left);
        int m=1+minDepth(root->left);
        int n=1+minDepth(root->right);
        return min(m,n);

        
    }
};