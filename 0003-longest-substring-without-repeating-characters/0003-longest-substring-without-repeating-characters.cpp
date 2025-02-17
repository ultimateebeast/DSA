class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        int maxi = INT_MIN;
        int l = 0;
        unordered_set<int>res;

        for(int i=0;i<s.size();i++){
            if(res.find(s[i])!=res.end()){
                while(l<i &&res.find(s[i])!=res.end()){
                    res.erase(s[l]);
                    l++;
                }
            }
            res.insert(s[i]);
            maxi = max(maxi,i-l+1);
        }
        return maxi;
    }
};