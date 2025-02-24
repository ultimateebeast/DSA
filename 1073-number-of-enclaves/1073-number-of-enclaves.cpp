class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& vis,
             vector<vector<int>>& grid, int m, int n, int delrow[],
             int delcol[]) {
        vis[row][col] = 1;

        for (int i = 0; i < 4; i++) {
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];

            if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n &&
                grid[nrow][ncol] == 1 && !vis[nrow][ncol]) {
                dfs(nrow, ncol, vis, grid, m, n, delrow, delcol);
            }
        }
    }

public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));

        int delrow[] = {-1, 0, +1, 0};
        int delcol[] = {0, +1, 0, -1};

        for (int i = 0; i < n; i++) {
            if (grid[0][i] == 1 && !vis[0][i]) {
                dfs(0, i, vis, grid, m, n, delrow, delcol);
            }

            if (grid[m - 1][i] == 1 && !vis[m - 1][i]) {
                dfs(m - 1, i, vis, grid, m, n, delrow, delcol);
            }
        }

        for (int j = 0; j < m; j++) {
            if (grid[j][0] == 1 && !vis[j][0]) {
                dfs(j, 0, vis, grid, m, n, delrow, delcol);
            }

            if (grid[j][n - 1] == 1 && !vis[j][n - 1]) {
                dfs(j, n - 1, vis, grid, m, n, delrow, delcol);
            }
        }

        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!vis[i][j] && grid[i][j] == 1) {
                    count++;
                }
            }
        }
        return count;
    }
};