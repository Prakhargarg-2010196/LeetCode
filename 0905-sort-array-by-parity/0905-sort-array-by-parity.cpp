class Solution {
public:
    bool static comp(int a,int b){
        if(a%2<b%2){
            return true;
        }
        else return false;
        
        // return a%2==0&&b%2!=0;
        
                    
    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(),nums.end(),comp);
        
//         int i=0;
//         int j=1;
//         while(i<nums.size())
//         if(nums[i]%2==0&&nums[j]%)
        
        return nums;
    }
};