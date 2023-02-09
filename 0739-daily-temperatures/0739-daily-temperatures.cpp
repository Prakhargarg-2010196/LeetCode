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
                res[i]=s.top()-i;
            }
            s.push(i);
        }
        return res;
        
    }
};