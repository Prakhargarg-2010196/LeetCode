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
    // this ques shows that the inorder traversal gives ascending order of tree nodes
    void inorder(TreeNode*root,vector<int> &kval){
        if(root==NULL)
            return;
        
        inorder(root->left,kval);
        kval.push_back(root->val);
        inorder(root->right,kval);
        
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int> val;
        inorder(root,val);
        
        return val[k-1];
    }
};