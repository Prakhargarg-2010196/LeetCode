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
        
        for(int i=0;i<lengthOfString;i++)
        {
            if(!(map_st[s[i]]==t[i]&&map_ts[t[i]]==s[i]))
                return false;
            
        }
        cout<<"mst"<<endl;  
        for(auto&it :map_st)
            cout<<it.first<<" "<<it.second<<endl;
        cout<<"mts"<<endl;    
        for(auto&it :map_ts)
            cout<<it.first<<" "<<it.second<<endl;
            return true;
    }
};