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
    //recursive solution
//     int helper(TreeNode*root,int count){
//         if(root==NULL)
//             return count;
//         // stack stores different values for left and right subtree counts each time 
//             count++;
//             return  max(helper(root->left,count),helper(root->right,count));
        
//     }
//     int maxDepth(TreeNode* root) {
//         if(root==NULL)
//             return 0;
//         int count=1;// root node count
//         // run on both subtrees
//         return max(helper(root->left,count),helper(root->right,count));
//     }

    // shorter solution
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        int maxLeft=maxDepth(root->left);
        int maxRight=maxDepth(root->right);
        return max(maxLeft,maxRight)+1;
    }
    
};