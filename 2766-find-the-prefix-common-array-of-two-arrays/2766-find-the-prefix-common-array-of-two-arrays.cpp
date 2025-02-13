class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int>res(n+1,0);
        vector<int>result;
        int same = 0;

        for(int i=0;i<n;i++){
            if(++res[A[i]] == 2) same++;
            if(++res[B[i]] == 2) same++;
            result.push_back(same);
        }
        return result;
    }
};