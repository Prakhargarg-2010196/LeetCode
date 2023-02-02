class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n=nums.size();
      int L=0;
      int R=n-1;
      while(L<=R){
          int mid=L+(R-L)/2;
          if(nums[mid]==target)
              return mid;
          else if(nums[mid]<target)
              L=mid+1;
          else 
              R=mid-1;
      }
        return -1;
    }
};