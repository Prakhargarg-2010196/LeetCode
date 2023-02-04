class Solution {
public:
    bool isValid(string s) {
        stack<char>stk;
        for(auto&it:s){
            if(it=='('||it=='{'||it=='[')
                stk.push(it);
            else{
            if(!stk.empty()){
                if(it==')'&&stk.top()=='('||
                   it=='}'&&stk.top()=='{'||
                   it==']'&&stk.top()=='[')
                stk.pop();
                else return false;
         }
            else return false;
            }       
        }
        return stk.empty();
    }
};