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
       // one approach (O(2*n))
//         q.push(NULL);
//         while(!q.empty()){
//             TreeNode* t=q.front();
//             q.pop();// pop the front element after storing it 
//              if(t==NULL){
//                 // if the front becomes null it means the level has ended and also the children
//                 // have been pushed so to make the next level push the null at the end of the queue           
//                 res.push_back(level);
//                 level.clear();
//                 if(!q.empty())
//                 q.push(NULL);
//             }
//             else{
//             level.push_back(t->val);
                
//             if(t->left)
//                 q.push(t->left);
//             if(t->right)
//                 q.push(t->right);
            
           
//             }
           
            
//         }
//         return res;
        
        
    // 2nd approach (O(N))
    // in this approach a slightly different methodology is to be taken we would not push null for 
    // change in levels instead we would deal with one level at a time
         while(!q.empty()){
            int n=q.size();// store the current levels' size 
             for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();// pop the front element after storing it 
                level.push_back(t->val);  
                if(t->left)
                  q.push(t->left);
                if(t->right)
                  q.push(t->right);
             }
             res.push_back(level);
             level.clear();
        
         }
        return res;
    }
};