class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int s = strs.size();

        unordered_map<string , vector<string>>ana;

        for(string word : strs)
        {
            string w = word;
            sort(w.begin(),w.end());
            ana[w].push_back(word);
        }

        for(auto& ans : ana){
            res.push_back(ans.second);
        }
        return res;
    }
};