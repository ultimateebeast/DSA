//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        if(m == 0){
            return {-1};
        }
        vector<vector<pair<int,int>>>adj(n+1);
        for(auto &e : edges){
            adj[e[0]].push_back({e[1],e[2]});
            adj[e[1]].push_back({e[0],e[2]});
            
        }

        vector<int>dist(n + 1,INT_MAX);
        vector<int>par(n+1,-1);
        set<pair<int,int>>s;
        
        dist[1] = 0;
        s.insert({0,1});
        
while (!s.empty()) {
    pair<int, int> x = *s.begin();
    s.erase(s.begin());

    int u = x.second;
    int d = x.first;

    for (pair<int, int> y : adj[u]) {
        int v = y.first;
        int w = y.second;

        if (dist[v] > d + w) {
            s.erase({dist[v], v});
            dist[v] = d + w;
            par[v] = u;
            s.insert({dist[v], v}); 
        }
    }
}

    if (dist[n] == INT_MAX) return {-1};


    vector<int> res;
    for (int i = n; i != -1; i = par[i]) {
        res.push_back(i);
    }
    reverse(res.begin(), res.end());


    res.insert(res.begin(), dist[n]);
    return res;
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        map<pair<int, int>, int> mp;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
            mp[{edges.back()[0], edges.back()[1]}] = edges.back()[2];
            mp[{edges.back()[1], edges.back()[0]}] = edges.back()[2];
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        int ans = 0;
        for (int i = 2; i < res.size(); i++) {
            ans += mp[{res[i], res[i - 1]}];
        }
        if (ans == res[0]) {

        } else if (res.size() == 1 && res[0] == -1)
            ans = res[0];
        else
            ans = -2;
        cout << ans << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends