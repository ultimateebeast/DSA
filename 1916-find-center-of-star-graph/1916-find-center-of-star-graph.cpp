class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = edges[0][0];
        int b = edges[0][1];

        int res = -1;

        for(int i=1;i<edges.size();i++){
            if(a == edges[i][0]){
                res = a;
                break;
            }
            if(b == edges[i][1]){
                res = b;
                break;
            }
        }
        return res;
    }
};