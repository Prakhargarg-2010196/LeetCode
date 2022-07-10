#include<string>
#include<unordered_map>
class Solution {
public:
      
    bool digitCount(string num) {
        unordered_map<char,int> mpp;
        for(auto& i:num)
          mpp[i]++;
        for(int i=0;i<num.length();i++)
            if(mpp[i+'0']!=num[i]-'0')
                return false;
        // for(auto& it:mpp)
        // {
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        
        
 
        return true;
    }
};