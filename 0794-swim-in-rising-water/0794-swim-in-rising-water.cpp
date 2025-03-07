class Solution {
private:
 bool dfs(int i, int j, vector<vector<int>>& grid, int maxi, vector<vector<bool>>&vis){

    int n = grid.size();

    if(i < 0 || i >= n || j < 0 || j >= n || vis[i][j] || grid[i][j] > maxi)  return false;
    
    vis[i][j] = true;
    
    if(i == n - 1 && j == n -1 ) return true;

    return dfs(i+1, j, grid, maxi, vis) ||
    dfs(i-1, j, grid, maxi, vis) ||
    dfs(i, j+1, grid, maxi, vis) ||
    dfs(i, j-1, grid, maxi, vis);
    
 }
public:
    int swimInWater(vector<vector<int>>& grid) 
    {
        int row = grid.size();
        int col = grid[0].size();

        int left = grid[0][0], right = row * row - 1, res = right;

        while(left <= right){
            int mid = left + (right - left) / 2;
            vector<vector<bool>>vis(row,vector<bool>(col,false));

            if(dfs(0, 0, grid, mid, vis)){
                res = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return res;
    }
};