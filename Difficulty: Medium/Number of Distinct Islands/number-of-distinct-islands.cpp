//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  private:
    void dfs(int row, int col, vector<vector<int>>&vis, vector<vector<int>>& grid
    , vector<pair<int,int>>&temp, int row0, int col0,int m, int n){
        vis[row][col] = 1;
        
        temp.push_back({row - row0, col - col0});
        
        int delrow[] = {-1,0,+1,0};
        int delcol[] = {0,+1,0,-1};
        
        for(int i=0;i<4;i++){
            int nrow = row + delrow[i];
            int ncol = col + delcol[i];
            
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n
            && !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                dfs(nrow,ncol,vis,grid,temp,row0,col0,m,n);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>>vis(m,vector<int>(n,0));
        
        set<vector<pair<int,int>>>res;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    vector<pair<int,int>>temp;
                    dfs(i,j,vis,grid,temp,i,j,m,n);
                    res.insert(temp);
                }
            }
        }
        return res.size();
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends