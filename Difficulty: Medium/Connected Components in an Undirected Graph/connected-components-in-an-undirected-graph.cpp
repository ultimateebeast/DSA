//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<vector<int>> connectedcomponents(int v, vector<vector<int>>& edges) {
        vector<vector<int>>res;
        vector<bool>vis(v,false);
        vector<vector<int>>adj(v);
        
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }
        
        for(int i=0;i<v;i++){
            if(!vis[i]){
                vector<int>temp;
                countUG(i,vis,adj,temp);
                sort(temp.begin(),temp.end());
                res.push_back(temp);
            }
        }
        return res;
    }
    
private: 
    void countUG(int node, vector<bool>&vis, vector<vector<int>>&adj, vector<int>&temp){
        
        vis[node] = true;
        temp.push_back(node);
        
        
        for(int val : adj[node]){
            if(!vis[val]){
                countUG(val,vis,adj,temp);
            }
        }
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        vector<vector<int>> res = obj.connectedcomponents(v, edges);
        sort(res.begin(), res.end());
        for (const auto &component : res) {
            for (int node : component) {
                cout << node << " ";
            }
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends