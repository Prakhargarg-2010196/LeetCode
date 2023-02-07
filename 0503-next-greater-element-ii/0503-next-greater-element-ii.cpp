class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // the brute force method is to use the circular array access using mod and two loops to access the next greater element if found break
    
        // Stack approach 
        // To in-place transform the array we traverse from right to left as the top of the stack will always indicate the next greater element in this way.
        // also as the array is circular we would traverse the array two times to 
        // replicate behaviour of a circular linked double array.
        int n=nums.size();
        stack<int>stk;// to get the next greater element use monotonically increasing stack
        vector<int>vc(n);
        for(int i=2*n-1;i>=0;i--){
            
            while(!stk.empty()&&stk.top()<=nums[i%n])
                stk.pop();
            if(stk.empty())
                vc[i%n]=-1;
            else 
                vc[i%n]=stk.top();
            stk.push(nums[i%n]);// push the next greater
        }
        return vc;
    }
};