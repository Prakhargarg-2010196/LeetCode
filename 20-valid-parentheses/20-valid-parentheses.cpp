class Solution {
public:
    bool isValid(string s) {
       stack<char> obrac;// to store opening brackets;
       for(auto itr:s)
       {
           if(itr=='(' 
                or
              itr=='{'
                or
              itr=='['
             )
                obrac.push(itr);
           else{
               if( 
                  obrac.empty()
                   or 
                   (obrac.top()=='(' and itr!=')') 
                    or
                  (obrac.top()=='{' and itr!='}' )
                    or
                  (obrac.top()=='[' and itr!=']')
                 
                 )
                   return false ;
               obrac.pop();
           }
       }
         return obrac.empty();
    }
};