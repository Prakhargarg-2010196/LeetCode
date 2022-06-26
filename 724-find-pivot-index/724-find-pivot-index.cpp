class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0,totalSum=0,leftSum=0;
        for(int x:nums)
            totalSum+=x;
        while(i<nums.size())
        {   
            if(leftSum==totalSum-leftSum-nums.at(i))
                return i;                
            leftSum+=nums.at(i);
            ++i;
        }
    return -1;
        
      
}
};