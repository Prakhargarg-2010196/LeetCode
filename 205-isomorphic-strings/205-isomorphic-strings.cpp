class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char,char>map_st,map_ts;
        int lengthOfString=s.size();
        for(int i=0;i<lengthOfString;i++)
        {   
            map_st[s[i]]=t[i];
            map_ts[t[i]]=s[i];
        }
/* In this question we need to check for one to one relationship between characters of two strings so we need two maps  

step 1: Create two maps:
            i.) first map: for first string characters to be mapped to second string characters.
            ii.) second map :for second string characters to be mapped to first string characters.
step 2: Check if the value of one map to the other map if both map to each other than the strings are isomporphic otherwise not.
*/ 
        for(int i=0;i<lengthOfString;i++)
        {
            if(!(map_st[s[i]]==t[i]&&map_ts[t[i]]==s[i]))
                return false;
            
        }
        // cout<<"mst"<<endl;  
        // for(auto&it :map_st)
        //     cout<<it.first<<" "<<it.second<<endl;
        // cout<<"mts"<<endl;    
        // for(auto&it :map_ts)
        //     cout<<it.first<<" "<<it.second<<endl;
            return true;
    }
};