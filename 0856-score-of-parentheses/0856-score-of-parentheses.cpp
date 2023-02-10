class Solution {
public:
    int scoreOfParentheses(string s) {
      //stack method: Stores the score of the interior most at stack top 
        // stack<char>st;
        // int score=0;// to take total score 
        // for(auto&it:s){
        //     if(it=='('){
        //         st.push(score);// push score at top each '('
        //         score=0;// to reset the score when a new '(' is encountered
        //     }
        //     else{
        //         score=st.top()+max(2*score,1);
        //         // score would be updated according to the value at the stack top 
        //         // which indicates the score of the interior most '('
        //         // if interior most has 0 as its score than the value of score becomes 1 other wise it assumes the max value of 2 times the current score.
        //         // pop and calculate the score
        //         st.pop();
        //     }
        // }
        
        // follow up S(n): O(1) solution 
        //  T(N): O(1) and S(n): O(1)
           int depth=0,count=0;
            for(auto&it:s){
               char prev;
               if(it=='('){
                   depth++;// increase the depth at each encounter of '('
               }
               else {
                   depth--; // decrease the depth at each encounter of ')' 
                    if (prev=='(' and it==')'){
                        count+=pow(2,depth);// count increases in power of two as 
                                            // even when (()()) is a case then too                                             // depth in power gives correct result.
                    }
                    
               }
                prev=it;
                
               
           }   
        
      return count;//return score;
    }
};