class Solution {
public:
    int trap(vector<int>& height) {
 // D.P Approach storing the max in prefix arrays.
        // int n=A.size();
        // vector<int> leftMax(n),rightMax(n);
        // leftMax[0]=A[0];    
        // // dynamic programming approach saving the max.
        // for(int i=1;i<n;i++){
        //     leftMax[i]=max(leftMax[i-1],A[i]);
        // }// to find the max Left height building uptill which rain water can be stored at left of a building
        // rightMax[n-1]=A[n-1];
        // for(int i=n-2;i>=0;i--){
        //      rightMax[i]=max(rightMax[i+1],A[i]);
        // }// to find the max right height building uptill which rain water can be stored at right of a building
        // int res=0;
        // for(int i=0;i<n;i++){
        //     res+=min(leftMax[i],rightMax[i])-A[i];
        //     // the two max from left and right are to be calculated and then water             will store upto the smaller of the two levels as otherwise overflow would happen    
        // }
        // return res;
// Stack approach:Bounding the value using the stack and then calculating the
// units of water stored.
        stack<int>s;// to store the bounded heights
        int n=height.size(),res=0;
        for(int i=0;i<n;i++){
            while(!s.empty()&&height[i]>height[s.top()]){
                int top=s.top();// store the current height 
                s.pop();// pop when the element is greater
                if(s.empty())
                    break;
                int width=i-s.top()-1;// width upto which the result is found
                int level=min(height[i],height[s.top()])-height[top];// describe the height upto which water is filled 
                res+=width*level;// store units of water in the res
            }
            s.push(i);
        }
        return res;
    }
};