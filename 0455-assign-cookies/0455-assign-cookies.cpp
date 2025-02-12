class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int s1 = s.size();
        if(s1 == 0)  return 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int count = 0;
        int ci = s1-1;
        int m = g.size() - 1;
        while(ci>=0 && m>=0){
            if(s[ci] >= g[m]){
                count++;
                ci--;
                m--;
            }
            else{
                m--;
            }
        }
        return count;
    }
};