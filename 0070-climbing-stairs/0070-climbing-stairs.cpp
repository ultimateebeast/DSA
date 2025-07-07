//MEMOIZATION
// class Solution {
// public:
//     int climbStairs(int n) {
//         vector<int> dp(n + 1, -1);
//         return solve(dp, n);
//     }
// private:
//     int solve(vector<int>& dp, int n){
//         if(n == 1) {
//             dp[n] = 1;
//             return 1;
//         }

//         if(n == 2){
//             dp[n] = 2;
//             return 2;
//         }

//         if(dp[n] != -1) return dp[n];

//         dp[n] = solve(dp, n - 1) + solve(dp, n - 2);
//         return dp[n];
//     }
// };


//TABULATION
class Solution{
public:
    int climbStairs(int n){
        vector<int> dp(n + 1, 0);

        dp[1] = 1;
        if(n >= 2){
            dp[2] = 2;
        }

        for(int i = 3; i <= n; i++){
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};