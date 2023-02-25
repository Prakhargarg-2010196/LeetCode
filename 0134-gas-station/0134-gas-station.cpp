class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int balance=0,loss=0;
        int startIndex=0;
        for(int i=0;i<n;i++){
             
            // store the gain from current station i.e the distance or fuel it gains for the next station
            int gain=gas[i]-cost[i];
            // inc the balance by the gain
            balance+=gain;
            /*if the balance becomes -ve then we continue from the next station leaving all the station in the back as each station's gain decrease the -ve value and if we start by a next station then it would only mean to increase the -ve value so skip the stations previous to the current station when the value turn to be -ve and also store the loss as it would help us in the forthcoming stations(simulating the circular value) also reset the balance as we would start a new journey here*/
            
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