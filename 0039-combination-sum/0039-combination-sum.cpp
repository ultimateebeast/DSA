class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> pth;

        sort(candidates.begin(), candidates.end());
        backtrack(candidates, 0, res, pth, target);

        return res;
    }
private:
    void backtrack(vector<int> &candidates, int idx, vector<vector<int>> &res, vector<int> &pth, int target){
        if(target == 0){
            res.push_back(pth);
            return;
        }

        if(target < 0) return;

        for(int i = idx; i < candidates.size(); i++){
            pth.push_back(candidates[i]);
            backtrack(candidates, i, res, pth, target - candidates[i]);
            pth.pop_back();
        }
    }
};