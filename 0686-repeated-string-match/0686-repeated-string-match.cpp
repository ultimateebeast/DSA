#include<string>
class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp = a;
        int count = 1;

        while(temp.length() < b.length()){
            temp+=a;
            count++;
        }

        if(temp.find(b)!=string::npos) return count;

        temp+=a;
        count++;
        if(temp.find(b)!=string::npos) return count;

        return -1;
    }
};