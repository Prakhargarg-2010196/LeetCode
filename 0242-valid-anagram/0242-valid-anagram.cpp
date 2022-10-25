class Solution {
public:
    bool isAnagram(string s, string t) {
        //Noob Approach
        array<int,26> countS;//std::array
        countS.fill(0);
        array<int,26> countT;//std::array
        countT.fill(0);
        for(int i=0;i<s.size();i++)
            countS[s[i]-97]++;
        for(int j=0;j<t.size();j++)
            countT[t[j]-97]++;
        if(countS==countT)
            return true;
        return false;
        
    }
};