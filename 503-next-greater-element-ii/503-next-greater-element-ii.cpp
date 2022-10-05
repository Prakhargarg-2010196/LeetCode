class Solution {
public:
     vector<int> nextGreaterElements(vector<int>& nums) {
        
         stack<int>stk;
         int size=nums.size();
         vector<int>nge(size,-1);
         stk.push(0);
         for(int i=1;i<2*size;i++){
             
             while(!stk.empty()&&nums[i%size]>nums[stk.top()]){
                 nge.at(stk.top())=nums[i%size];
                 stk.pop();
             }
             stk.push(i%size);
             
         }
        return nge;
    }
};