class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry = 0;

        int aSz = a.length() - 1;
        int bSz = b.length() - 1;

        while(aSz >= 0 || bSz >= 0 || carry == 1){
            if(aSz >= 0) carry += a[aSz--] - '0'; 
            if(bSz >= 0) carry += b[bSz--] - '0';

            res += carry % 2 + '0';
            carry /= 2;
        }

        reverse(res.begin(), res.end());

        return res;
    }
};