class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int balance=0,loss=0;
        int startIndex=0;
        for(int i=0;i<n;i++){
             
            // store the gain from the current index
            int gain=gas[i]-cost[i];
            // inc the balance by the gain
            balance+=gain;
            if(balance<0)
            {  startIndex=i+1;
               loss+=balance;
               balance=0;// refresh balance when the balance is found -ve
            }
        }
        if(balance+loss>=0){
            return startIndex;
        }
        else return -1;
    }
};