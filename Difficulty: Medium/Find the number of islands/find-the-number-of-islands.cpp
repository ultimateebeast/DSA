//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  private:
    void dfs(int i, int j, int row, int col, vector<vector<bool>>&vis, vector<vector<char>>&grid){
        if(i<0 || i>=row || j<0 || j>=col || grid[i][j] == '0' || vis[i][j]){
            return;
        }
        vis[i][j] = true;
        
        dfs(i-1,j,row,col,vis,grid);
        dfs(i+1,j,row,col,vis,grid);
        dfs(i,j+1,row,col,vis,grid);
        dfs(i,j-1,row,col,vis,grid);
        dfs(i-1,j-1,row,col,vis,grid);
        dfs(i-1,j+1,row,col,vis,grid);
        dfs(i+1,j-1,row,col,vis,grid);
        dfs(i+1,j+1,row,col,vis,grid);
    }
  public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        vector<vector<bool>>vis(row,vector<bool>(col,false));
        
        int count = 0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    dfs(i,j,row,col,vis,grid);
                    count++;
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends