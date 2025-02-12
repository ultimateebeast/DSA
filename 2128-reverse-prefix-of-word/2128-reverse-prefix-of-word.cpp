class Solution {
public:
    string reversePrefix(string &word, char ch) {
        size_t it = word.find(ch);
        cout<<it<<" ";
        if(it!=string::npos){
            reverse(word.begin(),word.begin()+it+1);
        }
        return word;
    }
};