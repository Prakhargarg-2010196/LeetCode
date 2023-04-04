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
    int helper(TreeNode*root,int& totalTilt){
        if(root==NULL)
            return 0;
        // hypothesis: will return us the sum of left and right subtrees
        int leftSum=helper(root->left,totalTilt);
        int rightSum=helper(root->right,totalTilt);
        // calc tilt at each node  
        int tilt=abs(leftSum-rightSum);
        totalTilt+=tilt;
        // to return the sum of whole tree
        return leftSum+rightSum+root->val;
        
    }
    int findTilt(TreeNode* root) {
       if(root== NULL)
           return 0;
        int totalTilt=0;
        helper(root,totalTilt);
        return totalTilt;
    }
};