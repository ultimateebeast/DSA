class Solution {
public:
    bool isSubsequence(string s, string t) {
        int first = 0;
        int second = 0;

        int szs = s.size();
        int szt = t.size();

        while(first < szs && second < szt){
            if(s[first] == t[second]){
                first++;
            }
            second++;
        }

        return first == szs;
    }
};