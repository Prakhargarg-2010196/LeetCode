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
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
          TreeNode* newTree=NULL;
        if(!root1&&!root2)
            return NULL;
        if(!root1&&root2)
        {
            newTree=new TreeNode(root2->val);
            newTree->left=mergeTrees(NULL,root2->left);
            newTree->right=mergeTrees(NULL,root2->right);
            
        }
        if(!root2&&root1)
        {
            newTree=new TreeNode(root1->val);
            newTree->left=mergeTrees(root1->left,NULL);
            newTree->right=mergeTrees(root1->right,NULL);
                            
        }
        if(root1&&root2){
            newTree=new TreeNode(root1->val+root2->val);
            newTree->left=mergeTrees(root1->left,root2->left);
            newTree->right=mergeTrees(root1->right,root2->right);
            
        }
        
        return newTree;
        
    }
};