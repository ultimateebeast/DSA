class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& q) {
        vector<int> res;
        unordered_map<int, int> mp, cnt;

        for (auto& v : q) {
            int num = v[0], col = v[1];

            if (mp.count(num)) {
                if (--cnt[mp[num]] == 0) cnt.erase(mp[num]);
            }

            mp[num] = col;
            cnt[col]++; 

            res.push_back(cnt.size()); 
        }
        return res;
    }
};
