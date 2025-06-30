class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -1);
        dp[0] = 0; 

        for(auto val : coins){
            for(int i = val; i <= amount; i++){
                if(dp[i - val] != -1){
                    dp[i] = dp[i] == -1 ? dp[i - val] + 1 : min(dp[i], dp[i - val] + 1);
                }
            }
        }
        return dp[amount];
    }
};