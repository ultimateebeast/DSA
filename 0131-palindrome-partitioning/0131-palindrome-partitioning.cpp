class Solution {
public:
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<bool>> isPal(n, vector<bool>(n, false));

        for(int i = n - 1; i >= 0; i--){
            for(int j = i; j < n; j++){
                if(s[i] == s[j] && (j - i <= 2 || isPal[i + 1][j - 1])){
                    isPal[i][j] = true;
                }
            }
        }

        vector<vector<string>> res;
        vector<string> pth;
        backtrack(0, res, isPal, s, pth);

        return res;
    }
private:
    void backtrack(int idx, vector<vector<string>> &res, vector<vector<bool>> &isPal, string &s, vector<string> &pth){
        if(idx == s.size()){
            res.push_back(pth);
            return;
        }

        for(int i = idx; i < s.size(); i++){
            if(isPal[idx][i]){
                pth.push_back(s.substr(idx, i - idx + 1));
                backtrack(i + 1, res, isPal, s, pth);
                pth.pop_back();
            }
        }
    }
};