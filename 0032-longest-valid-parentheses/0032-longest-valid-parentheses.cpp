class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>res;
        res.push(-1);
        int n = s.length();
        int count = 0;

        for(int i=0;i<n;i++){
            if(s[i] == '('){
                res.push(i);
            }
            else{
                res.pop();
                if(res.empty()){
                    res.push(i);
                }
                else{
                    count = max(count,i-res.top());
                }
            }
        }
        return count;
    }
};