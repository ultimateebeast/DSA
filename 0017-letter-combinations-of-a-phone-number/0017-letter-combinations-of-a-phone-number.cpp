class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;

        if(digits.empty()) return res;

        unordered_map<char, string> digi = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        helper(digits,0,"",res,digi);

        return res;
    }

private:
    void helper(const string& digits , int i, string combine , vector<string>&res,const unordered_map<char, string>& digi){
        if(i == digits.length()){
            res.push_back(combine);
            return;
        }

        string l = digi.at(digits[i]);
        for(char li : l){
            helper(digits,i+1,combine+li,res,digi);
        }
    }
};