class Solution {
private:
    bool dfs(int node, vector<int>&vis, vector<int>&pathVis,
     vector<vector<int>>&graph, vector<int>&nodeVis){
        vis[node] = 1;
        pathVis[node] = 1;

        nodeVis[node] = 0;

        for(int val : graph[node]){
            if(!vis[val]){
                if(dfs(val, vis, pathVis, graph, nodeVis) == true){
                    return true;
                }
            }
            else if(pathVis[val]){
                return true;
            }
        }
        nodeVis[node] = 1;
        pathVis[node] = 0;

        return false;
     }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>vis(n,0);
        vector<int>pathVis(n,0);

        vector<int>nodeVis(n,0);

        vector<int>res;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,vis,pathVis,graph,nodeVis);
            }
        }

        for(int i=0;i<n;i++){
            if(nodeVis[i] == 1){
                res.push_back(i);
            }
        }

        return res;
    }
};