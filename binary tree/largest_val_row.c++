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
    vector<int> arr;
    vector<int> largestValues(TreeNode* root) {
        if(root==NULL) return arr;
        queue<TreeNode*> q;
        q.push(root);
        vector<int> a;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
               TreeNode* node=q.front();
               if(node->left)
               {
                q.push(node->left);
               }
                if(node->right)
               {
                q.push(node->right);
               }
               a.push_back(node->val);
               q.pop();

            }
            int maxi=INT_MIN;
            for(int i=0;i<a.size();i++)
            {
                maxi=max(maxi,a[i]);
            }
            arr.push_back(maxi);
            a.clear();
        }
        return arr;

        
    }
};