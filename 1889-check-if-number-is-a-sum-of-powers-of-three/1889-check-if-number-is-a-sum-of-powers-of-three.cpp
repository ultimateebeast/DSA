class Solution {
public:
    bool checkPowersOfThree(int n) {
        int a = -1;
        while(n>0){
            a = n%3;
            n/=3;
            if(a>1){
                return false;
            }
        }
        cout<<a<<n;
        if(a==0 || a==1){
            return true;
        }

        cout<<a;
        return false;
    }
};