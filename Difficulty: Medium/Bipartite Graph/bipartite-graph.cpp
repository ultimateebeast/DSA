//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  private:
    bool dfs(int node, int col, vector<int>&color, vector<vector<int>>&adj){
        color[node] = col;
        
        for(int val : adj[node]){
            if(color[val] == -1){
                if(dfs(val,!col,color,adj) == false){
                    return false;
                }
            }
            
            else if(color[val] == color[node]){
                return false;
            }
        }
        return true;
    }
  public:
    bool isBipartite(vector<vector<int>>& adj) {
        int m = adj.size();
        
        vector<int>color(m,-1);
        
        for(int i=0;i<m;i++){
            if(color[i] == -1){
                if(dfs(i,0,color,adj) == false){
                    return false;
                }    
            }
        }
        return true;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isBipartite(adj);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends