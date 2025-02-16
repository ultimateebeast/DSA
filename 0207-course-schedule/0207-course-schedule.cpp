class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int s = prerequisites.size();
        vector<int>vis(numCourses,0);
        vector<vector<int>>adj(numCourses);
        for(auto &val : prerequisites){
            adj[val[1]].push_back(val[0]);
        }
        for(int i=0;i<numCourses;i++){
            if(vis[i] == 0){
                if(dfs(i,adj,vis)) return false;
            }
        }
        return true;
    }
private:
    bool dfs(int node,vector<vector<int>>&adj,vector<int>&vis){
        vis[node] = 1;
        for(int val : adj[node]){
            if(vis[val] == 1) return true;
            if(vis[val] == 0){
                if(dfs(val,adj,vis)) return true;
            }
        }
        vis[node] = 2;
        return false;
    }
};