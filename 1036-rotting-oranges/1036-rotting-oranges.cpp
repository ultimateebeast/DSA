class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>>q;
        int row = grid.size();
        int col = grid[0].size();

        int fcount = 0;

        vector<vector<bool>>vis(row,vector<bool>(col,false));
        for(int i=0;i<row;i++){
            for(int j = 0;j<col;j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = true;
                }
                if(grid[i][j] == 1){
                    fcount++;
                }
            }
        }

        
        int tm = 0;
        int fresh = 0;
        vector<int>delrow = {1,-1,0,0};
        vector<int>delcol = {0,0,1,-1};
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;

            tm = max(tm,t);
            q.pop();

            for(int i = 0; i<4; i++){
                int nrow = r+delrow[i];
                int ncol = c+delcol[i];
                if(nrow>=0 && nrow<row && ncol>=0 && ncol<col && vis[nrow][ncol]==0 && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol] = true;
                    fresh++;
                }
            }
        }
        if(fcount!=fresh)
        return -1;

        return tm;
    }
};