//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  private: 
    void dfs(int node, vector<bool>&vis, vector<vector<int>>&adj, int V){
        vis[node] = true;
        
        for(int i=0;i<V;i++){
            if(adj[node][i] && !vis[i]){
                dfs(i,vis,adj,V);
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        vector<bool>vis(V,false);
        int count = 0 ;
        for(int i=0;i<V;i++){
            if(!vis[i]) {
                count++;
                dfs(i,vis,adj,V);
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends