class Solution {
public:
    bool isValid(string word) {
        if(word.length()<3){
            return false;
        }
        bool v=false,c=false;
        for(int i=0;i<word.length();i++){
            if(!iswalnum(word[i])){
                return false;
            }
            if(word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U'||word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                v=true;
            }else{
                if(isalpha(word[i])){
                    c=true;
                }
            }
        }
        if(v==false || c==false){
            return false;
        }
        return true;
    }
};