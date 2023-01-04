class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0||k==0)
            return;
        vector<int>temp=nums;
        int i=0;
        while(i<n){
            nums[(i+k)%n]=temp[i];
            i++;
        }
    }
};