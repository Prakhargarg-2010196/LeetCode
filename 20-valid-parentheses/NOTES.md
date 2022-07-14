Here the first if part is self explanatory so I am going to explain the else part
```
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
/* In the else part the if condition should contain the check for empty stack first as if no
element gets pushed then the other "or statements" in the if check would n't be
executed.
Secondly
in the if check we are checking if the current top element opening bracket matches the coming closing bracket.
*/
​
```