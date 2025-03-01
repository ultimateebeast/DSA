class Solution {
public:
    int subtractProductAndSum(int n) {
        int prd = 1;
        int sum = 0;

        while(n>0){
            int v = n%10;
            prd*=v;
            sum+=v;
            n/=10;
        }
        // cout<<prd<<" "<<sum;
        return prd-sum;
    }
};