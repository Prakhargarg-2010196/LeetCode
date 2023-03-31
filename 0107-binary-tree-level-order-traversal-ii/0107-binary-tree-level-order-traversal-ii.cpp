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
    void levelOrder(TreeNode* root,vector<int>& level,vector<vector<int>>&result){
        queue<TreeNode*>q;// to store nodes.
        if(root==NULL)
            return ;
        // push the tree root node and null along with it to end first level        
        q.push(root);
        q.push(NULL);

        while(!q.empty()){
            TreeNode* t=q.front();
            q.pop();// store the front of the queue and pop the element
            if(t==NULL){
                result.push_back(level);// push the stored level into result vector
                level.clear();// clear the level
                if(!q.empty()){
                    q.push(NULL);
                    // when queue is not empty after the end of the level then push new NULL 
                    // to indicate next level ending
                }
                
            }
            else{
                level.push_back(t->val);
                // first push the current front element to the level array 
                // then check its right and left element and push them to queue if exist for 
                // next level 
                if(t->left){
                    q.push(t->left);
                }
                if(t->right){
                    q.push(t->right);
                }
                
            }
        }
    }
    
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        // level order traversal 
        vector<vector<int>>res;
        vector<int>level;
        levelOrder(root,level,res); 
        reverse(res.begin(),res.end());
        return res;
        
        
    }
};