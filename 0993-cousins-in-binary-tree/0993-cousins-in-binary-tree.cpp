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
    int totalDepth;
    // clears the concept of depth of a single node.
    int depth(TreeNode* root,int currDep,int val){
        if(root==NULL)
            return 0;     
         if(root->val==val)
         { 
             totalDepth=currDep;
         } 
         depth(root->left,currDep+1,val);
         depth(root->right,currDep+1,val);
        return totalDepth;
        
    }
    TreeNode* findParent(TreeNode* root,int val){
        if(root==NULL)
            return NULL;
        if(root&&root->left&&root->left->val==val){
            return root;
        }
        if(root&&root->right&&root->right->val==val){
            return root;
        }
         
        TreeNode*leftSubtree=findParent(root->left,val);        
         TreeNode*rightSubtree=findParent(root->right,val);
        if(leftSubtree==NULL)
            return rightSubtree;
        return leftSubtree;
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root==NULL)
            return true;
        int depthX=depth(root,0,x);
        int depthY=depth(root,0,y);
        TreeNode* parX=findParent(root,x);
        TreeNode* parY=findParent(root,y);
        if(parX&&parY)
        cout<<parX->val<<" "<<parY->val;
        if(depthX==depthY&&parX!=parY)
            return true;
        return false;
    }
};