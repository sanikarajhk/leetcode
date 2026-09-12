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
    string s="";
    vector<string> arr;
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL) return arr;
        string s1=to_string(root->val);
         if(s.empty())
            {
                s=s+s1;
            }
            else
            {
                s=s+"->";
                s=s+s1;
            }
        if(root->left==NULL && root->right==NULL)
        {
           
            arr.push_back(s);
        }
         
        binaryTreePaths(root->left);
        binaryTreePaths(root->right);

        if(!s.empty())
        {
        s.erase(s.size()-s1.size());
        }
          if(!s.empty())
        {
        s.pop_back();
        }
          if(!s.empty())
        {
        s.pop_back();
        }
 

        
    
          return arr;






        
    }
};