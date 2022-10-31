class Solution {
//     Time Complexity:O(nlogn)
//     Space Complexity:O(n)
    public:
    static bool pairCompare(pair<int,int> &p1,pair<int,int> &p2){
        return p1.second>p2.second;
    } 
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>count; // O(n) space
        // made an unordered map for frequency.
        for(auto& it:nums){  
            count[it]++;     
        }
        vector<pair<int,int>>kFrequentPairs; //O(n) space
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
    
//     Time Complexity:O(nlogk)
//     Space Complexity:O(n+k)
//  public:
//     vector<int> topKFrequent(vector<int>& nums, int k){
//         unordered_map<int,int> count;
//         // made an unordered map for frequency.
//         for(auto it:nums){
//             count[it]++;
//         }
//         //make a min heap 
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>maxFrequency;
        
//         for(auto&it:count){
//             maxFrequency.push(make_pair(it.second,it.first));
//             //Pop if the max elements crosses k limit in the heap;
//             if(maxFrequency.size()>k){
//                 maxFrequency.pop();
//             }
//         }
//         vector<int> result;
//         while(!maxFrequency.empty()){
//             result.push_back(maxFrequency.top().second);            
//             maxFrequency.pop();
//         }
//         return result;
//     }
};