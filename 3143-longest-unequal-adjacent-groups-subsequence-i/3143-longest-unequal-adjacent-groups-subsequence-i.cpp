class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> res;

        int lonSq = -1;

        int grpSz = groups.size();

        for(int i = 0; i < grpSz; i++){
            if(groups[i] != lonSq){
                res.push_back(words[i]);
                lonSq = groups[i];
            }
        }
        return res;
    }
};