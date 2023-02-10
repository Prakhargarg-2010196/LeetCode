class Solution {
public:
    string removeOuterParentheses(string s) {
        int flag=0;
        stack<char>st;
        string res;
        for(auto&it:s){
            if(it=='(')
            {   if(st.size()>0)// append '(' when 1 more '(' is already present
                {   
                    res+=it;  
                }
                st.push(it);
            }
            else {
                if(st.size()>1) // as when two '(' are present then only we need to append ')' to result
                    res+=it;
                st.pop();
            }
        }
        return res;
    }
};