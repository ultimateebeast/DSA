class Solution {
public:
    string getPermutation(int n, int k) {
        vector<string>res;
        string s = "";

        for(int i=1;i<=n;i++){
            s+=to_string(i);
        }

        int i=1;

        do{
            res.push_back(s);
        }while(next_permutation(s.begin(),s.end()));

        return res[k-1];
    }
};