//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  private:
    void dfs(int node, vector<bool>&vis, vector<int>&res, vector<vector<int>>&adj){
        vis[node] = true;
        res.push_back(node);
        
        for(int val : adj[node]){
            if(!vis[val]){
                vis[val] = true;
                dfs(val,vis,res,adj);
            }
        }
    }
  public:
    vector<int> dfsOfGraph(vector<vector<int>>& adj) {
        int size = adj.size();
        vector<bool>vis(size,false);
        vector<int>res;
        
        for(int i=0;i<size;i++){
            if(!vis[i]){
                dfs(i,vis,res,adj);
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
        int V, E;
        cin >> V >> E;

        vector<vector<int>> adj(
            V); // Use vector of vectors instead of array of vectors.

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        Solution obj;
        vector<int> ans = obj.dfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends