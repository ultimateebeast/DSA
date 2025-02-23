class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<vector<int>>res(row,vector<int>(col,-1));

        queue<pair<pair<int,int>,int>> q;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j] == 0){
                    q.push({{i,j},0});
                    res[i][j] = 0;
                }
            }
        }

        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};

        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;

            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if(nrow>=0 && nrow<row && ncol>=0 && ncol<col
                && res[nrow][ncol] == -1){
                    res[nrow][ncol] = t + 1;
                    q.push({{nrow,ncol},t + 1});
                }
            }
        }
        return res;
    }
};