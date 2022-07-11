class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>count;
        for(auto it=nums.begin();it!=nums.end();it++)
            count[*it]++;
        for(auto it:count)
        {
            // cout<<it.first<<" "<<it.second<<endl;
            if(it.second>=2)
                return true;
        }
            
        return false;
    }
};