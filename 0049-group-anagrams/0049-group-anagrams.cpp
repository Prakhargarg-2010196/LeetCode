class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto& it:strs){
            string t=it;
            sort(t.begin(),t.end());//sorting the key 
            mp[t].push_back(it);//storing the value with same keys together
        }
        vector<vector<string>> anagrams;
        for(auto it:mp){
                anagrams.push_back(it.second);
        }
        
        return anagrams;
    }
};