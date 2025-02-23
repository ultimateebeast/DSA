class Solution {
private: 
    void dfs(int node, vector<bool>&vis, vector<vector<int>>& isConnected, int size){
        vis[node] = true;

        for(int i=0;i<size;i++){
            if(isConnected[node][i] && !vis[i]){
                dfs(i,vis,isConnected,size);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int size = isConnected.size();
        vector<bool>vis(size,false);

        int count = 0;

        for(int i=0;i<size;i++){
            if(!vis[i]){
                count++;
                dfs(i,vis,isConnected,size);
            }
        }
        return count;
    }
};