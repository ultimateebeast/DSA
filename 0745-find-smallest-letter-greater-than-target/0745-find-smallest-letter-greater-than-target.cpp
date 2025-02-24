class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        sort(letters.begin(),letters.end());

        for(char s : letters){
            if(s>target){
                return s;
            }
        }
        return letters[0];
    }
};