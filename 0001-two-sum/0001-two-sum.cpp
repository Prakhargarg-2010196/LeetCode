class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    /*
    two solutions : 
    
    brute force
    two loops to move over each element and find the sum and check it with target
    
    two pointer approach:
    have to be sorted first and then to increase sum value add from start and to decrease sum remove from the start through pointers
    
    optimised approach but not space optimised
    hash map approach
    store the keys in the hashmap and check if diff exists in hashmap
    */ 
    int n=nums.size();
    unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            // mp[nums[i]]=i;
            if(mp.find(target-nums[i])!=mp.end())
            {   cout<<"yes";
                return {mp[target-nums[i]],i};
            } 
            mp[nums[i]]=i;
                
        }
        
        return {};
    }
};