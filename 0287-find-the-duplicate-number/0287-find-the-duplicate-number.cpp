class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //Time Complexity:O(n)
    //Space Complexity:O(1)
    int duplicateNumber=-1;
    for(auto&it:nums){
        int currentNumber=abs(it);
        if(nums[currentNumber]<0)
        {
            duplicateNumber=currentNumber;    
            break;
        }
        nums[currentNumber]*=-1;
    }
    for(auto&it:nums)
        it=abs(it);
    
        return duplicateNumber;
        
    }
};