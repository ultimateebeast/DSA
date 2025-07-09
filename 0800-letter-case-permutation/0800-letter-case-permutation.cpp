class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> res;

        backtrack(0, s, res);

        return res;

    }
private:
    void backtrack(int idx, string s, vector<string> &res){
        if(idx == s.size()){
            res.push_back(s);
            return ;
        }

        backtrack(idx + 1, s, res);

        if(isalpha(s[idx])){
            s[idx] ^= 32;
            backtrack(idx + 1, s, res);
            s[idx] ^= 32;
        }
    }
};