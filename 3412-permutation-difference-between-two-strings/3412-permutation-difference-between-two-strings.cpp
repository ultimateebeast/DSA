class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int>res;

        for(int i=0;i<s.length();i++){
            res[t[i]] = i;
        }
        int op = 0;
        for(int i=0;i<s.length();i++){
            auto it = res.find(s[i]);
            op += abs(i - (it->second));
        }

        return op;
    }
};