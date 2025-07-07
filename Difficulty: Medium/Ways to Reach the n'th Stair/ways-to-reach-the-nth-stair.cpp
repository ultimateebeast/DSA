class Solution {
  public:
    int countWays(int n) {
        // your code here
        vector<int> dp(n + 1, -1);
        
        return sol(dp, n);
    }
    
private:
    int sol(vector<int>& dp, int n){
        if(n <= 1){
            dp[1] = 1;
            return 1;
        }
        
        if(n == 2){
            dp[2] = 2;
            return 2;
        }
        
        if(dp[n] != -1) return dp[n];
        dp[n] = sol(dp, n - 1) + sol(dp, n - 2);
        
        return dp[n];
    }
};
