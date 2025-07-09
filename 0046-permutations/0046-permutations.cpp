class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> pth;
        vector<bool> check(nums.size(), false);

        backtrack(nums, check, res, pth);
        
        return res;
    }
private: 
    void backtrack(vector<int> &nums, vector<bool> &check, vector<vector<int>> &res, vector<int> &pth){
        if(pth.size() == nums.size()){
            res.push_back(pth);
        }

        for(int i = 0; i < nums.size(); i++){
            if(check[i]) continue;

            pth.push_back(nums[i]);
            check[i] = true;

            backtrack(nums, check, res, pth);

            pth.pop_back();
            check[i] = false;
        }
    }
};