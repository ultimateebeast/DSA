class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> pth;
        sort(nums.begin(), nums.end());
        backtrack(nums, 0, res, pth);

        return res;
    }
private:
    void backtrack(vector<int> &nums, int idx, vector<vector<int>> &res, vector<int> &pth){
        res.push_back(pth);

        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[i - 1]) continue;
            pth.push_back(nums[i]);
            backtrack(nums, i + 1, res, pth);
            pth.pop_back();
        }
    }
};