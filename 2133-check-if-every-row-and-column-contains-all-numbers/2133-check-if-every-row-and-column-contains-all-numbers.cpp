class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        /*
        brute-algo:
            . Take two loops one for going through each row and another for going through each column.    
            . Check for each element present in the range 1<=element<=n
            
            . repeat both the two steps but change the first step to go through columns first and then through rows.
          
            
        
        
        
        
        */
        int n=matrix.size();
        unordered_set<int>st1,st2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                if(st1.find(matrix[i][j])==st1.end())
                    st1.insert(matrix[i][j]);            
                    
                if(st2.find(matrix[j][i])==st2.end())
                    st2.insert(matrix[j][i]);
                
            }
            
            if(st1.size()<n||st2.size()<n)
                return false;
            st1.clear();
            st2.clear();
            
            
        }
        
        for(const auto&it:st1)
            cout<<it;
        cout<<endl;
        for(const auto&it:st2)
            cout<<it;
        return true;
    }
};