class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(auto& it:strs){
            string t=it;
            // sort(t.begin(),t.end());//sorting the key 
            mp[sortString(t)].push_back(it);//storing the value with same keys together
        }
        // saving the results in the anagrams vector
        vector<vector<string>> anagrams;
        for(auto it:mp){
                anagrams.push_back(it.second);
        }
        
        return anagrams;
      
        
        
    }
    private: 
    string sortString(string &s){
        vector<int> countChar(26,0);
        for(auto it:s)
            countChar[it-'a']++;//it-'a' will subtract the ascii value of both and give the ascii value in return;
        string str;
        for(int i=0;i<countChar.size();i++)
        {   
             str+=to_string(countChar[i]+'a');
          
         }
        cout<<str<< " ";
        return str;
    }
};