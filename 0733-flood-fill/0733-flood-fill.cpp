class Solution {
private:
    void dfs(int i, int j,vector<vector<int>>& res,int oldColor, int newColor, int row, int col)
    {
        if(i<0 || i>=row || j<0 || j>=col || res[i][j] != oldColor){
            return ;
        }

        res[i][j] = newColor;
        
        dfs(i-1,j,res,oldColor,newColor,row,col);
        dfs(i+1,j,res,oldColor,newColor,row,col);
        dfs(i,j-1,res,oldColor,newColor,row,col);
        dfs(i,j+1,res,oldColor,newColor,row,col);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row = image.size();
        int col = image[0].size();

        vector<vector<int>>res = image;
        int oldColor = image[sr][sc];

        if(image[sr][sc] == color) return image;

        dfs(sr,sc,res,oldColor,color,row,col);

        return res;
    }
};