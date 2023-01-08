class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int globalSum=INT_MIN;
        int localSum=0;    
        for(int i=0;i<nums.size();i++){
            localSum+=nums[i];
            if(localSum>globalSum)
                globalSum=localSum;
            if(localSum<0)
                localSum=0;
        }
        return globalSum;
    }
};