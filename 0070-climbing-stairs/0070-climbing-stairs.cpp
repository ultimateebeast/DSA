class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n + 1, -1);
        return solve(dp, n);
    }
private:
    int solve(vector<int>& dp, int n){
        if(n == 1) {
            dp[n] = 1;
            return 1;
        }

        if(n == 2){
            dp[n] = 2;
            return 2;
        }

        if(dp[n] != -1) return dp[n];

        dp[n] = solve(dp, n - 1) + solve(dp, n - 2);
        return dp[n];
    }
};