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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
        { 
            TreeNode* node=new TreeNode(val);
            node->left=NULL;
            node->right=NULL;
            return node;
        }
        if(val<root->val && root->left!=NULL)
        {
            insertIntoBST(root->left,val);

        } 
        else if(val>root->val && root->right!=NULL)
        {
            insertIntoBST(root->right,val);
        }
        else if(val<root->val && root->left==NULL)
        {
            TreeNode* node=new TreeNode(val);
            root->left=node;
            node->left=NULL;
            node->right=NULL;
        }
        else if(val>root->val && root->right==NULL)
        {
            TreeNode* node=new TreeNode(val);
            root->right=node;
            node->left=NULL;
            node->right=NULL;
        }
        return root;



        
    }
};