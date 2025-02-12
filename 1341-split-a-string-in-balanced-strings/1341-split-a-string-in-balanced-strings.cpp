class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0 , l = 0, r = 0, n = s.size();

        for(int i=0;i<n;i++){
            if(s[i] == 'R') r++;
            else l++;

            if(r==l){
                count++;
                l=0;
                r=0;
            }
        }
        return count;
    }
};