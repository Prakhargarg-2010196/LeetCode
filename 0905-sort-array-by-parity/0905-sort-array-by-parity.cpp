class Solution {
public:
//     bool static comp(int a,int b){
//         if(a%2<b%2){  // 0 for even // 1 for odd 
//             return true;
//         }
//         else return false;
        
//         // return a%2==0&&b%2!=0;// this is my solution 
        
                    
//     }
    vector<int> sortArrayByParity(vector<int>& nums) {
        // sort(nums.begin(),nums.end(),comp);
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<j){
            
            if(nums[i]%2==0)
                i++;
            else if(nums[j]%2!=0)
                j--;
            else if(nums[j]%2==0&&nums[i]%2!=0)
            {  
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            
        }
        return nums;
    }
};