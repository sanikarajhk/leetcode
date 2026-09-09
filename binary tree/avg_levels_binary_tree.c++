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
    vector<double> arr;
    vector<double> averageOfLevels(TreeNode* root) {
        vector<int> a;
        if(root==NULL) return arr;
        queue<TreeNode*> q;
        q.push(root);
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
            double sum=0;
            for(int i=0;i<a.size();i++)
            {
                sum+=a[i];
            }
            double avg=sum/n;
            arr.push_back(avg);
            a.clear();
           
        }
        return arr;

        
    }
};