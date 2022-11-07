class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int globalMaximum=0;
        for(int i=0;i<accounts.size();i++){
            int localAccountsSum=0;
            for(int j=0;j<accounts[i].size();j++){
                localAccountsSum+=accounts[i][j];
            }
            globalMaximum=max(localAccountsSum,globalMaximum);
        }
        return globalMaximum;
    }
};