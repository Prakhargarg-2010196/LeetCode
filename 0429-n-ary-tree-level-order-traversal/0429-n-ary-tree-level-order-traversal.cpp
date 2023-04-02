/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    
    void levelOrder(Node*root,vector<int> &level,vector<vector<int>>&result){
        if(root == NULL){
            return;
        }
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node* t=q.front();
            q.pop();
            if(t==NULL){
                result.push_back(level);
                level.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
            else{
                level.push_back(t->val);
                vector<Node*>children=t->children;
                if(children.size()>0){
                    for(int i=0;i<children.size();i++){
                       q.push(children[i]);                    
                    }
                }
            }
        }
        
    }
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>res;
        vector<int>level;
        levelOrder(root,level,res);
        return res;
    }
};