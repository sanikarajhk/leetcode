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
    int preindex=0;
    vector<int> inorder;
    unordered_map<int,int> mp;
    void helper(vector<int>& preorder)
    {
        for(int i=0;i<preorder.size();i++)
        {
            inorder.push_back(preorder[i]);
        }
        sort(inorder.begin(),inorder.end());
    }
    TreeNode* help(vector<int>& preorder,int left,int right)
    {
        if(left>right) return NULL;
        TreeNode* root=new TreeNode(preorder[preindex++]);
        int index=mp[root->val];
        root->left=help(preorder,left,index-1);
        root->right=help(preorder,index+1,right);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        if(preorder.size()==0) return NULL;
        helper(preorder);
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        return help(preorder,0,inorder.size()-1);
        


       



        
    }
};