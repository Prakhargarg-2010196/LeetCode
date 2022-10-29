class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Naive Approach
        for(int i=0;i<nums.size();i++){
            int j=0;
            while(j<nums.size()){
                if(i==j){
                    j++;
                    continue;
                }
                else{
                    if((target-nums[i])==nums[j]){
                        return {i,j};
                    }
                }
                j++;
            }
        }
        return {};
    }
};