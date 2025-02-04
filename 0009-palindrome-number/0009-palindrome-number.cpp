class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        string d(s.rbegin(),s.rend());
        if(s == d){
            return 1;
        }

        else{
            return 0;
        }
    }
};