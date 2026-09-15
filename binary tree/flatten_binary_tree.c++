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
    vector<TreeNode*> arr;
    int index=1;
    bool done=true;
    void helper(TreeNode* root)
    {
        if(root==NULL) return;
        arr.push_back(root);
        helper(root->left);
        helper(root->right);
    }
    void flatten(TreeNode* root) {
        if(root==NULL) return;
    
        helper(root);
        for(int i=0;i<arr.size()-1;i++)
        {
            arr[i]->left=NULL;
            arr[i]->right=arr[index++];
        }
        arr[arr.size()-1]->left=NULL;
        arr[arr.size()-1]->right=NULL;
        

        
        
        

        
      

        
    }
};