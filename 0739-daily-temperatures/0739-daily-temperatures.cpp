class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // as we need to compare the current temp to next temps and also find the next greater use stack to store the next greater
        stack<int>s;
        int n=temperatures.size();
        vector<int>res(n,0);
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&temperatures[s.top()]<=temperatures[i]){
                    s.pop();
            }
            if(!s.empty()){
                res[i]=s.top()-i;// s.top() stores the index of the next greatest and the i is the index of the element whose greatest is to be found so s.top() > i;  as we are traversing array from right;
            }
            s.push(i);
        }
        return res;
        
    }
};