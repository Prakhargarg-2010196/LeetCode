class Solution {
    public:
    static bool pairCompare(pair<int,int>p1,pair<int,int>p2){
        return p1.second>p2.second;
    } 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count;
        // made an unordered map for frequency.
        for(auto& it:nums){
            count[it]++;
        }
        vector<pair<int,int>>kFrequentPairs;
        for(auto it:count){
            kFrequentPairs.push_back(make_pair(it.first,it.second));
        }
        // sorted pairs using comparator function        
        sort(kFrequentPairs.begin(),kFrequentPairs.end(),pairCompare);
      
        cout<<endl;
        vector<int>result;
        for(int i=0;i<k;i++){
            result.push_back(kFrequentPairs[i].first);
        }
            
        return result;
    }

};