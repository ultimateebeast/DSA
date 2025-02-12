class Solution {
public:
    int minimumChairs(string s) {
        int p = 0,maxp = -1;
        for(char val : s){
            if(val == 'E'){
                p++;
            }
            else{
                p--;
            }
            maxp = max(maxp,p);
        }
        return maxp;
    }
};