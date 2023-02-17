class Solution {
public:
    /*keep removing digit from the string till the digits in ans is less than or
      equal to the digit in the original string , also only k digits can be removed
    */
    string removeKdigits(string num, int k) {
        stack<char>s;// will store the ans so formed
        int n=num.size();
        string ans;
        for(auto&it:num){
            while(!s.empty()&&k>0&&s.top()>it){
                s.pop();
                k--;
            }// main condition satisfied;
            s.push(it);
            
        }
        
            // k remains even on scanning the whole string as the string's digits are arranged in monotonically inc fashion so the digits are not popped at all
            // ex: 3589  3<5<8<9, 3 is not removed as then no would start from 5
        while (k--){
            s.pop();// pop the first k digits as they would be largest.
        }
    
        
            while(!s.empty()){
                ans+=s.top();
                s.pop();
            }
            
        
        reverse(ans.begin(),ans.end());
        cout<<ans;
        int i=0;
        while(ans.size()>0&&ans[i]=='0')
            i++;
        
        ans.erase(ans.begin(),ans.begin()+i);
        // if the ans is completely empty
        if(ans.size()==0){
            ans="0";
        }
        
       return ans; 
    }
};