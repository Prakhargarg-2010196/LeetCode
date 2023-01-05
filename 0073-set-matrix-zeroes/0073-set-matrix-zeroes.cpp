class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //Brute force approach(O(mn))
        int CR=matrix.size();
        int CC=matrix[0].size();
        vector<int> rowsZero;
        vector<int> columnsZero;
        
//Check for other elements to be zero
        for(int i=0;i<CR;i++){
            for(int j=0;j<CC;j++){
                if(matrix[i][j]==0){
                    rowsZero.push_back(i);
                    columnsZero.push_back(j);
                }
            }
            
        }
        for(int i=0;i<columnsZero.size();i++){
            cout<<columnsZero[i]<<"";
        }
//mark zeroes for the rowsZero and ColumnsZero
        for(int i=0;i<rowsZero.size();i++){
            int r=rowsZero[i];
            for(int j=0;j<CC;j++)
                matrix[r][j]=0;
        }
        for(int i=0;i<columnsZero.size();i++){
            int c=columnsZero[i];
            for(int j=0;j<CR;j++)
                matrix[j][c]=0;
        }
        
        
        
        
// bool firstRowZero=false,firstColumnZero=false;
//check for the zeroes in first row and first columns to contain zero
        // for(int i=0;i<CR;i++){
        //         if(matrix[0][i]==0)
        //              firstRowZero=true;
        // }
        // for(int i=0;i<CC;i++){
        //         if(matrix[i][0]==0)
        //              firstColumnZero=true;
        // }        
// //now mark zeroes if first row and first column  contained any zeroes 
//         if(firstRowZero)
//             for(int i=0;i<CC;i++)
//                 matrix[0][i]=0;
//         if(firstColumnZero)
//             for(int i=0;i<CR;i++)
//                 matrix[i][0]=0;
        
    }
};