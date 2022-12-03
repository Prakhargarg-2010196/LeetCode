class Solution {
public:
    static bool comp(pair<char,int> x,pair<char,int> y){
        if(x.second>y.second)
            return true;
        return false;
    }
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        string temp="";
        for(auto it:s)
        {   mp[it]++;// creating a map of frequencies
        }
        // for(auto it:mp){
        //     // printing to ensure that map is created
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        vector<pair<char,int>>vc;
        for(auto it:mp){
            vc.push_back({it.first,it.second});
        }
        sort(vc.begin(),vc.end(),comp);// sort the vector
        for(auto it:vc){
            cout<<it.first<<" "<<it.second;
            cout<<endl;
        }
        for(auto it:vc){
            temp.append(it.second,it.first);// append(number_of_char_to_be_inserted,char_to_be_inserted)
        }
        
        return temp;
    }
};