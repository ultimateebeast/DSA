class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
        for(int i=0;i<n;i++){
            size_t it = s.find(part);
            if(it!=string::npos){
                s.erase(it,part.length());
            }
        }
        return s;
    }
};