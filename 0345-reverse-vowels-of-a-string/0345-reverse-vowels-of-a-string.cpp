class Solution {
private:
 bool isVowel(char temp){
    if(temp == 'a' || temp == 'e' || temp == 'i' || temp == 'o' || temp == 'u'){
        return true;
    }
    return false;
 }
public:
    string reverseVowels(string s) {
        int sz = s.size();
        int start = 0;
        int end = sz - 1;

        while(start < end){
            char a = tolower(s[start]);
            char b = tolower(s[end]);;

            bool checkStart = false;
            bool checkEnd = false;


            if(isVowel(a)) checkStart = true;
            if(isVowel(b)) checkEnd = true;

            if(checkStart && checkEnd) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            if(!checkStart){
                start++;
            }
            if(!checkEnd){
                end--;
            }
        }
        return s;
    }
};