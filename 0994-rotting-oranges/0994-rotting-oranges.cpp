class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
//         Follow-up:
//         reduce the space-complexity: make changes in grid itself and use a queue to store the rotten ones.
        int m=grid.size();
        int n=grid[0].size();
        // storing rotten oranges
        queue<pair<int,int>>q;
        // visited oranges
        vector<vector<int>>visited(m,vector<int>(n,0));
        // directions adjacent to the orange
        int x[4]={0,0,1,-1};
        int y[4]={1,-1,0,0};
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    visited[i][j]=1;
                }

            }
        }
        int ans=0;
        while(!q.empty()){
                int sz=q.size();
                while(sz--){
                    auto it=q.front();// 0,0 => (0,1) ,(1,0)
                    q.pop();// pop the rotten oranges earlier as they are not of any use.
                    //find new rotten oranges
                    for(int i=0;i<4;i++){
                        int newX=it.first+x[i];
                        int newY=it.second+y[i];
                        if(newX<0||newY<0||newX>=m||newY>=n||visited[newX][newY]==1||grid[newX][newY]==0){
                            continue;   
                        }
                        else{
                            q.push({newX,newY});
                            visited[newX][newY]=1;
                            grid[newX][newY]=2;
                        }
                    }
                  
                }
              if(!q.empty()){
                  // when at the last stage when all the oranges that could become 
                  // rotten have become rotten we have to only increase time when there are more rotten ones in the queue otherwise no use
                        ans++;
             }
        }
         for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;                
                }

            }
        }
        return ans;
        
    }
};