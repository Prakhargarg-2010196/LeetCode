class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int globalMaximum=0;
        for(int i=0;i<accounts.size();i++){
            int localMaximum=0;
            for(int j=0;j<accounts[i].size();j++){
                localMaximum=max(localMaximum,localMaximum+accounts[i][j]);
            }
            globalMaximum=max(localMaximum,globalMaximum);
        }
        return globalMaximum;
    }
};