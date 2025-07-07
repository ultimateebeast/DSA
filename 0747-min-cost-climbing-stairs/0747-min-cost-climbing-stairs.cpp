class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int sz = cost.size();
        vector<int> dp(sz + 2, 0);

        for(int i = sz - 1; i >= 0; i--){
            dp[i] = cost[i] + min(dp[i + 2], dp[i + 1]);
        }

        return min(dp[0], dp[1]);
    }
};