class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>>frq;

        vector<vector<int>>res;

        for(int i=0;i<groupSizes.size();i++){
            frq[groupSizes[i]].push_back(i);
            if (frq[groupSizes[i]].size() == groupSizes[i]) {
                res.push_back(frq[groupSizes[i]]);
                frq[groupSizes[i]].clear();
            }
        }
        return res;
    }
};