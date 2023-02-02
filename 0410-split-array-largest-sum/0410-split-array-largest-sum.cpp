class Solution {
public:
    bool check(int largestSum,vector<int>&nums,int k){
        int sum=0,splits=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>largestSum)
            {   
                sum=nums[i];//as the sum has to be refreshed for new sub array
                splits++;
            
            }
        }
        if(splits>k) return false;
        else return true;
    }
    int splitArray(vector<int>& nums, int k) {
        // maximum element in the range
        int L=*max_element(nums.begin(),nums.end());
        // sum of all the elements
        int R=accumulate(nums.begin(),nums.end(),R);
        int solution;
        while(L<=R){
            int mid=(L+R)/2;
            if(check(mid,nums,k)){
                solution=mid;
                R=mid-1;
            }
            else L=mid+1;
        }
                
        
        
        return solution;
    }
};