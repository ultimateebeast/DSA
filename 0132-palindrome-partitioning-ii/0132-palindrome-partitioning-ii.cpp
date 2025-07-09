class Solution {
public:
    int minCut(string s) {
        int sz = s.size();
        vector<vector<bool>> checkPal(sz, vector<bool>(sz, false));
        vector<int> dp(sz + 1, 0);

        for(int i = sz - 1; i >= 0; i--){
            for(int j = i; j < sz; j++){
                if(s[i] == s[j] && (j - i <= 2 || checkPal[i + 1][j - 1])){
                    checkPal[i][j] = true;
                }
            }
        }

        for(int i = sz - 1; i >= 0; i--){
            int minCuts = INT_MAX;
            for(int j = i; j < sz; j++){
                if(checkPal[i][j]){
                    if(j == sz - 1) minCuts = 0;
                    else minCuts = min(minCuts, 1 + dp[j + 1]);
                }
            }
            dp[i] = minCuts;
        }

        return dp[0];
    }
};