class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int szs = s.size();
        int szt = t.size();

        int left = 0;
        int right = 0;

        char ch;

        while(left < szs && right < szt){
            if(s[left] != t[right]){
                return t[left];
            }

            left++;
            right++;
        }
        return ch;
    }
};