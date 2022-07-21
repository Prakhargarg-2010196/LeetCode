#include <algorithm>
class Solution {
public:
    int withoutStackApproach(string s)
    {
        // ignore numbers and symbols
        // take one counter variable(count) for opening parenthesis
        // increase the counter if opening "(" is encountered while reduce it if ')' is encountered
        // at last find the max of the previous counter value using another variable maxCount;
     int maxCount=0,count=0;
     for(auto it:s)
     {  
        if(it=='(')
        {   count++;
            maxCount=max(maxCount,count);
        }
         else if (it==')')
            count--;
        
     }
        return maxCount;
    }
    int stackApproach(string s)
    {   stack<char> stk;
        int maxOpeningParenthesis=0;
        //As the goal is to calculate number of opening parenthesis.
        for(auto character:s)
        {    if(character=='(')
                stk.push(character);
             else if(character==')')
             {   int size=stk.size();// as the max function requires same type variables;   
                 maxOpeningParenthesis=max(maxOpeningParenthesis,size);
                 //Comparing with stk.size() because stack size reduces after every encounter of closing brackets and increases after each encounter of opening one.
                 stk.pop();
                 // pop as soon as the closing bracket is encontered this reduces the stack size indicating a decrease in opening brackets.
              
              }  
         }
     return maxOpeningParenthesis;
    }
    int maxDepth(string s) {
     
    return stackApproach(s);
        
    }
};