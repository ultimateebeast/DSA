class Solution {
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n = adj.size();
        vector<int>res;
        vector<bool>vis(n,false);
        
        helper(0, adj, res, vis);
        return res;
    }
    
    private:
        void helper(int node, vector<vector<int>>& adj, vector<int>& res, vector<bool>& vis){
            if(vis[node]) return ;
            
            vis[node] = true;
            res.push_back(node);
            
            for(int val : adj[node]){
                if(!vis[val]){
                    helper(val, adj, res, vis);
                }
            }
        }
};