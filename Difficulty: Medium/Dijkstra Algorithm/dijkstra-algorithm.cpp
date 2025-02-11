//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template
class Solution {
  public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        // Code here
        int n = adj.size();
        vector<int>dist(n,INT_MAX);
        
        set<pair<int,int>>s;
        
        dist[src] = 0;
        s.insert({0,src});
        
        while(s.size()){
            pair<int,int> x = *s.begin();
            int u = x.second;
            int v = x.first;
            
            for(pair<int,int>&y : adj[u]){
                if(dist[y.first] > v + y.second){
                    if(dist[y.first] != INT_MAX){
                        s.erase({dist[y.first],y.first});
                    }
                    dist[y.first] = v+y.second;
                    s.insert({dist[y.first],y.first});
                    // cout << u << " " << v << " " << y.first << " " << dist[y.first] << endl;
                }
            }
            s.erase(x);
        }
        return dist;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> adj(V);
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            pair<int, int> t1 = {v, w}, t2 = {u, w};
            adj[u].push_back(t1);
            adj[v].push_back(t2);
        }
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(adj, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends