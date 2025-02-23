//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        
       int row = grid.size();
       int col = grid[0].size();
       
       vector<vector<int>>res(row,vector<int>(col,-1));
       
       queue<pair<int,int>>q;
       
       for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
               if(grid[i][j] == 1){
                   q.push({i,j});
                   res[i][j] = 0;
               }
           }
       }
       
       int drow[] = {-1,0,+1,0};
       int dcol[] = {0,+1,0,-1};
       
       while(!q.empty()){
           int r = q.front().first;
           int c = q.front().second;
           q.pop();
           for(int i=0;i<4;i++){
               int nrow = r + drow[i];
               int ncol = c + dcol[i];
               
               if(nrow>=0 && nrow<row && ncol>=0 && ncol<col
               && res[nrow][ncol] == -1){
                   res[nrow][ncol] = res[r][c] + 1;
                   q.push({nrow,ncol});
               }
           }
       }
       return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        vector<vector<int>> ans = obj.nearest(grid);
        for (auto i : ans) {
            for (auto j : i) {
                cout << j << " ";
            }
            cout << "\n";
        }
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends