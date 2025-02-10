class Solution {
public:
    string clearDigits(string s) {
        string res = "";
        stack<char>temp;

        for(char c : s){
            if(isdigit(c)){
                if(!temp.empty()) temp.pop();
            }
            else{
                temp.push(c);
            }
        }


        while(!temp.empty()){
            res+=temp.top();
            temp.pop();
        }

        reverse(res.begin(),res.end());

        return res;
    }
};