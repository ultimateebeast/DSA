class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";

        int n = word1.size();
        int m = word2.size();
        int i=0,j=0;
        while(i<n && j<m){
            s+=word1[i];
            s+=word2[j];
            i++;
            j++;
        }

        while (i < n) s += word1[i++];
        while (j < m) s += word2[j++];
        return s;
    }
};