class Solution {
public:
//     Time Complexity:O(m*n)
//     m:no. of customers , n:no.of accounts each customer owns
//     Space Complexity:O(1) // no extra space is used just variables are used.
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