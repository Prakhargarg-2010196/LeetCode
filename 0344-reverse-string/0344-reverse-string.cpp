class Solution {
public:
    void reverseString(vector<char>& s) {
// Two pointer approach
//         int length=s.size();
//         int start=0;
//         int end=length-1;
//         while(start<=end){
//             swap(s[start],s[end]);
//             start++;
//             end--;
            
//         }
    
//         Stack approach
    stack<char> stk;
    for (auto &it : s)
        stk.push(it);
    s.clear();
    while (!stk.empty())
    {   
        s.push_back(stk.top());
        stk.pop();
    }
    
        
        
    }
};