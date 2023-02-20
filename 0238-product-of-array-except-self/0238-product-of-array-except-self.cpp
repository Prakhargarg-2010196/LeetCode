class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
//         T:N , S:N
        int n=nums.size();
        vector<int>prefix(n),suffix(n),ans(n);
        // calculate the product of elements previous to the element itself
        // take the first one's product=1
        prefix[0]=1;
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        // calculate the product of elements next to the element itself
        // take the first one from end product=1
        suffix[n-1]=1;
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        }
        // take product of both prefix and suffix for each element
        for(int i=0;i<n;i++){
            ans[i]=prefix[i]*suffix[i];
        }
        return ans;
        
    }
};