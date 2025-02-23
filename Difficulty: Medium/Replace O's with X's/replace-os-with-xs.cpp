//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  private:
    void dfs(int row, int col, vector<vector<int>>&vis, vector<vector<char>>& mat
    ,int drow[], int dcol[],int m, int n){
        vis[row][col] = 1;
        
        for(int i=0;i<4;i++){
            int nrow = row + drow[i];
            int ncol = col + dcol[i];
            
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n 
            && mat[nrow][ncol] == 'O' && !vis[nrow][ncol]){
                dfs(nrow,ncol,vis,mat,drow,dcol,m,n);
            }
        }
    }
  public:
    vector<vector<char>> fill(vector<vector<char>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};
        
        vector<vector<int>>vis(m,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            if(!vis[0][i] && mat[0][i] == 'O'){
                dfs(0,i,vis,mat,drow,dcol,m,n);
            }
            
            if(!vis[m-1][i] && mat[m-1][i] == 'O'){
                dfs(m-1,i,vis,mat,drow,dcol,m,n);
            }
        }
        
        for(int j=0;j<m;j++){
            if(!vis[j][0] && mat[j][0] == 'O'){
                dfs(j,0,vis,mat,drow,dcol,m,n);
            }
            
            if(!vis[j][n-1] && mat[j][n-1] == 'O'){
                dfs(j,n-1,vis,mat,drow,dcol,m,n);
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && mat[i][j] == 'O'){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];

        Solution ob;
        vector<vector<char>> ans = ob.fill(mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends