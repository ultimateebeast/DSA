class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int row = grid.size();
        map<int,int>frq;

        for(auto val : grid){
            for(int val1 : val){
                frq[val1]++;
            }
        }
        int a = -1;
        int b = -1;
        int row1 = row*row;
        int n = (row1 * (row1 + 1))/2;
        int sum = 0;

        for(auto val : frq){
            sum+=val.first;
            if(val.second > 1) b = val.first;
        }
        return {b,n - sum};
    }
};