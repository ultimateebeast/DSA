//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

class Solution {
  private:
    bool dfs(int node, int vis[], int pathVis[], 
    vector<int>adj[], int nodeVis[]){
        vis[node] = 1;
        pathVis[node] = 1;
        
        nodeVis[node] = 0;
        for(int val : adj[node]){
            if(!vis[val]){
                if(dfs(val,vis,pathVis,adj,nodeVis) == true){
                    nodeVis[val] = 0;
                    return true;
                }
            }
            else if(pathVis[val]){
                nodeVis[val] = 0;
                return true;
            }
        }
        nodeVis[node] = 1;
        pathVis[node] = 0;
        
        
        return false;
    }
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        int vis[V] ={0};
        int pathVis[V] = {0};
        
        int nodeVis[V] = {0};
        vector<int>res;
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(i,vis,pathVis,adj,nodeVis);
            }
        }
        
        for(int i=0;i<V;i++){
            if(nodeVis[i] == 1) res.push_back(i);
        }
        
        return res;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends