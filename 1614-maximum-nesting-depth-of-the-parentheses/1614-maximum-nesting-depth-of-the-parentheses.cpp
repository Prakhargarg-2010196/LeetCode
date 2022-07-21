class Solution {
public:
    
    int maxDepth(string s) {
     stack<char> vps;
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
};