class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<bool>> vis(row, vector<bool>(col, false));

        int c = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    dfs(i, j, vis, grid,row,col);
                    c++;
                }
            }
        }
        return c;
    }

private:
    void dfs(int i, int j, vector<vector<bool>>& vis,
             vector<vector<char>>& grid,int row,int col) {
        if (i < 0 || i >= row || j < 0 || j >= col || grid[i][j] == '0' ||
            vis[i][j]) {
            return;
        }

        vis[i][j] = true;

        dfs(i, j - 1, vis, grid,row,col);
        dfs(i, j + 1, vis, grid,row,col);
        dfs(i - 1, j, vis, grid,row,col);
        dfs(i + 1, j, vis, grid,row,col);
    }
};