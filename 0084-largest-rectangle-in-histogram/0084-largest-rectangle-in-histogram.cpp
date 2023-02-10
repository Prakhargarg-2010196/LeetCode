class Solution {
public:
    // func to find the next smaller element to right upto which the wr would extend
    vector<int> NSR(vector<int>&heights,int n){
        stack<int>s;
        vector<int>res(n,-1);
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty())
                res[i]=s.top();
            s.push(i);
        }
        
        return res;
    }
    // func to find the next smaller element to left upto which the wl would extend
    vector<int> NSL(vector<int>&heights,int n){
        stack<int>s;
        vector<int>res(n,-1);
        for(int i=0;i<n;i++){
            while(!s.empty()&&heights[s.top()]>=heights[i]){
                s.pop();
            }
            if(!s.empty())
                res[i]=s.top();
            s.push(i);
        }
        
        return res;
    }
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> nsr= NSR(heights,n);
        vector<int> nsl= NSL(heights,n);
        int maxArea=0;
        for(int i=0;i<n;i++){
            int wl,wr,W,H=heights[i];    
            if(nsl[i]==-1){
                    wl=i+1;
                }
            else {
                wl=i-nsl[i];
            }
            if(nsr[i]==-1){
                wr=n-i;
            }
            else{
                wr=nsr[i]-i;
            }
            
            W=wl+wr-1;
            maxArea=max(maxArea,W*H);
        }
        return maxArea;
    }
};