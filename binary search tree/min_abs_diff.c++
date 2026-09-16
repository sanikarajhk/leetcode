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
    int mini=INT_MAX;
    vector<int> arr;
    void helper(TreeNode* root)
    {
        if(root==NULL) return;
        helper(root->left);
        arr.push_back(root->val);
        helper(root->right);


    }

    int getMinimumDifference(TreeNode* root) {
        if(root==NULL) return 0;
        helper(root);
        for(int i=1;i<arr.size();i++)
        {
            int m=abs(arr[i]-arr[i-1]);
            mini=min(mini,m);
        }
        return mini;

        
    }
};