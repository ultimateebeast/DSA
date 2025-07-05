class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> dp;
        vector<int> comb;

        sort(candidates.begin(), candidates.end());
        sol(candidates, target, dp, comb, 0);
        
        return dp;
    }
private:
    void sol(vector<int>& candidates, int target, vector<vector<int>>& dp, vector<int>& comb, int idx){
        if(target == 0){
            dp.push_back(comb);
            return;
        }

        if(target < 0) return;

        for(int i = idx; i < candidates.size(); i++){
            comb.push_back(candidates[i]);
            sol(candidates, target - candidates[i], dp, comb, i);
            comb.pop_back();
        }
    }
};