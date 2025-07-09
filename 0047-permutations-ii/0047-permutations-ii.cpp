class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> pth;
        vector<bool> check(nums.size(), false);

        sort(nums.begin(), nums.end());
        backtrack(nums, res, pth, check);

        return res;
    }
private:
    void backtrack(vector<int> &nums, vector<vector<int>> &res, vector<int> &pth, vector<bool> &check){
        if(pth.size() == nums.size()){
            res.push_back(pth);
            return;
        }

        for(int i = 0; i < nums.size(); i++){
            if(check[i]) continue;

            if(i > 0 && nums[i] == nums[i - 1] && !check[i - 1]) continue;

            pth.push_back(nums[i]);
            check[i] = true;

            backtrack(nums, res, pth, check);

            pth.pop_back();
            check[i] = false;
        }
    }
};