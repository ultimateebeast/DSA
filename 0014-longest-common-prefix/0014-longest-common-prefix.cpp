class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string s = strs[0];
        for(int i=1;i<strs.size();i++){
            int si = strs[i].size();
            string temp = strs[i];
            string ss = "";
            int j = 0;
            while(j<si && s[j]==temp[j]){
                ss+=s[j];
                j++;
            }
            s = ss;
        }
        return s;
    }
};