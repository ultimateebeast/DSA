class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int nmSz = nums.size();
        vector<int> dp(target + 1, -1);
        return sol(dp, nums, target, nmSz);
    }
private:
    int sol(vector<int>&dp, vector<int>& nums, int target, int nmSz){
        if(target == 0) return 1;
        if(target < 0) return 0;

        if(dp[target] != -1) return dp[target];
        int cnt = 0;

        for(int val : nums){
            cnt += sol(dp, nums, target - val, nmSz);
        }

        dp[target] = cnt;
        return cnt;
    }
};