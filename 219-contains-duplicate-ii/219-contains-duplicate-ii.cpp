class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>dc;
        for(int i=0;i<nums.size();i++)
        {
            if(dc.find(nums[i])==dc.end())
            {
                dc[nums[i]]=i;
                
            }
            else {
                
                if(abs(dc[nums[i]]-i)<=k)
                    return true;
                else 
                    dc[nums[i]]=i;
                
            }
            
        }
        return false;
    }
};