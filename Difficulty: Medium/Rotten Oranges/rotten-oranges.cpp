//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>>& mat) {
        if(mat.empty()) return 0;
        int row = mat.size();
        int col = mat[0].size();
        
        vector<vector<int>>vis(row,vector<int>(col,0));
        
        queue<pair<pair<int,int>,int>>q;
        
        int fcount = 0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }
                else if(mat[i][j] == 1){
                    fcount++;
                }
            }
        }
        
        int tm = 0;
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};
        
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            
            q.pop();
            
            for(int i=0;i<4;i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                
                if(nrow>=0 && nrow<row && ncol>=0 && ncol<col
                && vis[nrow][ncol] == 0 && mat[nrow][ncol] == 1){
                    q.push({{nrow,ncol},t + 1});
                    vis[nrow][ncol] = 2;
                    fcount--;
                }
            }
        }
        
        return (fcount == 0)?tm:-1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(mat);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends