class Solution {
public:
    string removeOuterParentheses(string s) {
        // stack<char>st;
        // string res;
        // for(auto&it:s){
        //     if(it=='(')
        //     {   if(st.size()>0)// append '(' when 1 more '(' is already present
        //         {   
        //             res+=it;  
        //         }
        //         st.push(it);
        //     }
        //     else {
        //         if(st.size()>1) // as when two '(' are present then only we need to append ')' to result
        //             res+=it;
        //         st.pop();
        //     }
        
        
        // Without stack solution O(1) space
        // take a count for checking if it is the first (is >0) for '('and last element (is >1) for ')' 
        int count=0;
        string res;
        for(auto&it:s){
            if(it=='('){
                if(count>0){
                    res+=it;
                }
                count++;//increase the count value
            }
            else {
                if(count>1){
                    res+=it;
                }
                count--;
            }
        }
        
        
         
        return res;
    }
};