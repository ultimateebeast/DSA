class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> pth;

        backtrack(n, k, 1, res, pth);

        return res;
    }
private:
    void backtrack(int n, int k, int idx, vector<vector<int>> &res, vector<int> &pth){
        if(pth.size() == k){
            res.push_back(pth);
            return;
        }

        for(int i = idx; i <= n; i++){
            pth.push_back(i);
            backtrack(n, k, i + 1, res, pth);
            pth.pop_back();
        }
    }
};