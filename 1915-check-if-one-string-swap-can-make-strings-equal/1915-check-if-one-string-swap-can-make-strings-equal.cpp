class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int>temp;
        int n = s1.size();
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                temp.push_back(i);
            }
        }

        if(temp.size() == 0){
            return true;
        }
        else if(temp.size() == 2){
            if(s1[temp[0]] == s2[temp[1]] && s1[temp[1]] == s2[temp[0]]){
                return true;
            }
        }
        return false;
    }
};