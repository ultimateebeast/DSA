class Solution {
public:
    bool isNumber(string s) {
        int n = s.size();
        bool isdot = false, isnum = false , ise = false;

        for(int i=0;i<n;i++){
            if(isdigit(s[i])) isnum = true;
            else if(s[i] == '+' || s[i] == '-'){
                if(i>0 && (s[i-1]!='e' && s[i-1] != 'E')) return false;
            }
            else if(s[i] == 'e' || s[i] == 'E'){
                if(ise || !isnum) return false;
                ise = true;
                isnum = false;
            }
            else if(s[i] == '.'){
                if(isdot || ise) return false;
                isdot = true;
            }
            else return false;
        }
        return isnum;
    }
};