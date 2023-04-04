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
    bool helper(TreeNode* ls,TreeNode* rs){
        // if both nodes are null then tree is symm
        if(ls==NULL&& rs==NULL )
            return true;
        // if one node is null and other has value then tree is not symm
        if(ls!=NULL && rs==NULL)
            return false;
        if(rs!=NULL&& ls==NULL)
            return false;
        // if both has value check
        if(rs->val == ls->val)
            // check if the left node of left subtree == right node of right subtree
            // also check if the right node of left subtree == left node of right subtree
            return helper(ls->left,rs->right)&&helper(ls->right,rs->left);
        
      return false;
    }
    bool isSymmetric(TreeNode* root) {
        
        // first step write base condition 
        // if there is no root no need to perform recursion 
        if(root == NULL )
            return true;
        // use a helper function to return the result of recursion over left and right subtree
        return helper(root->left,root->right);
    }
};










// iterative solution
// class Solution {
// public:
//     bool isSymmetric(TreeNode* root) {
        
//     
//     }
// };