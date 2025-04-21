class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int mx_cnt = 0;

        for (char c : s) {
            if (c == '(') {
                cnt++;
                if (mx_cnt < cnt) {
                    mx_cnt = cnt;
                }
            } else if (c == ')') {
                cnt--;
            }
        }
        return mx_cnt;
    }
};