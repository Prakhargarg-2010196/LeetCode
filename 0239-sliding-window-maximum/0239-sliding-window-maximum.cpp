class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int i,j;
        int n=nums.size();
        deque<int>dq;
        vector<int>ans;
        for(i=0;i<n;i++){
            
            while(!dq.empty()&&dq.front()<=i-k){
                dq.pop_front();
            }
            while(!dq.empty()&&nums[i]>nums[dq.back()]){
                dq.pop_back();
            }
            dq.push_back(i);
            if(i>=k-1){// first window ends when b==k-1
                ans.push_back(nums[dq.front()]);
            }
            
        }
        return ans;
    }
};