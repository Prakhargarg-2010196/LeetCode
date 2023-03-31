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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>res;
        vector<int>level;
        
        if(root==NULL)
            return res;
        // push the root node and as it is the ending of the first level and each level is indicated using NULL at its end thus push NULL too.
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();// pop the front element after storing it 
             if(t==NULL){
                // if the front becomes null it means the level has ended and also the children
                // have been pushed so to make the next level push the null at the end of the queue           
                res.push_back(level);
                level.clear();
                if(!q.empty())
                q.push(NULL);
            }
            else{
            level.push_back(t->val);
                
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
            
           
            }
           
            
        }
        return res;
        
    }
};