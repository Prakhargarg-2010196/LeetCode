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
    bool helper(TreeNode* root,int &val){
        if(root==NULL){
            return true;
        }
        if(root->left!=NULL){
            if(root->left->val!=val)
             return false;
        }
        if(root->right!=NULL){
            if(root->right->val!=val)
             return false;
        }
        // hypothesis: contain if the left and right subtrees are univalued
        bool leftSub=helper(root->left,val);
        bool rightSub=helper(root->right,val);
        
        return leftSub&&rightSub;
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return true;
        int rootValue=root->val;
        return helper(root,rootValue);        
                
    }
};