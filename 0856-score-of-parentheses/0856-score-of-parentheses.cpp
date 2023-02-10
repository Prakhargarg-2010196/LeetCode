class Solution {
public:
    int scoreOfParentheses(string s) {
      //stack method: Stores the score of the interior most at stack top 
        stack<char>st;
        int score=0;// to take total score 
        for(auto&it:s){
            if(it=='('){
                st.push(score);// push score at top each '('
                score=0;// to reset the score when a new '(' is encountered
            }
            else{
                score=st.top()+max(2*score,1);
                // score would be updated according to the value at the stack top 
                // which indicates the score of the interior most '('
                
                // pop and calculate the score
                st.pop();
            }
        }
              
      return score;
    }
};