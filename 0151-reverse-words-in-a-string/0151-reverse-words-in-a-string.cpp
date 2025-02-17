class Solution {
public:
    string reverseWords(string s) {
        string a = "";
        vector<string>res;

        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                if(!a.empty()){res.push_back(a);
                a = "";
                }
            }
            else{
                a+=s[i];
            }
        }
        if(!a.empty()) {
            res.push_back(a);
        }

        string result = "";

        for(int i=res.size()-1;i>=0;i--){
            result+=res[i];
            if(i!=0){
                result+=" ";
            }
        }

        return result;
    }
};