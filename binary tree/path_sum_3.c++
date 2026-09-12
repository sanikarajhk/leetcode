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
    int count=0;
    
    unordered_map<long long,int> mp;
    
    int dfs(TreeNode* root,long long currsum,int targetSum)
    {
        if(root==NULL) return count;
        currsum+=root->val;
        if(mp.count(currsum-targetSum))
        {
            count+=mp[currsum-targetSum];
        }
        mp[currsum]++;
        dfs(root->left,currsum,targetSum);
        
        dfs(root->right,currsum,targetSum);
        mp[currsum]--;
        return count;
        

       
    }
    int pathSum(TreeNode* root, int targetSum) {  
        mp[0]=1;
        return dfs(root,0,targetSum);
        

        

        
    }
};