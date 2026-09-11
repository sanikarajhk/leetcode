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
    vector<vector<int>> arr;
    vector<int> a;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        if(root==NULL) return arr;
        
        a.push_back(root->val);
        if(root->left==NULL && root->right==NULL) 
        {
            if(targetSum==root->val)
            {
            arr.push_back(a);
            
            }
           
        }
        targetSum-=root->val;
        pathSum(root->left,targetSum);
        int n=a[a.size()-1];
        
        if(root->left!=NULL && root->left->val==n) a.pop_back();
        pathSum(root->right,targetSum);
        n=a[a.size()-1];
        if(root->right!=NULL && root->right->val==n) a.pop_back();
        return arr;
      

        
    }
};