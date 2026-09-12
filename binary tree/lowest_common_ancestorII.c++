/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> arr1;
    vector<TreeNode*> arr2;
  
    

    bool path1(TreeNode* root,TreeNode* p)
    {
        if(root==NULL) return false;
        arr1.push_back(root);
        if(root==p)
        {
            
            return true;
        }
        
            if(path1(root->left,p)||path1(root->right,p))
            {
                return true;
            }
            arr1.pop_back();

            
            
            return false;
        
    }

    bool path2(TreeNode* root,TreeNode* q)
    {
        if(root==NULL) return false;
        arr2.push_back(root);
        if(root==q)
        {
            
            return true;
        }
     
           
            if(path2(root->left,q)||path2(root->right,q))
            {
                return true;
            }
            arr2.pop_back();
            
            
            return false;
     
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return root;
        path1(root,p);
        path2(root,q);
        int n=min(arr1.size(),arr2.size());
        TreeNode* a=arr1[0];
        
        for(int i=0;i<n;i++)
        {
            if(arr1[i]==arr2[i])
            {
                a=arr1[i];
            }
            else
            {
                break;
            }

        }
        return a;



        
    }
};