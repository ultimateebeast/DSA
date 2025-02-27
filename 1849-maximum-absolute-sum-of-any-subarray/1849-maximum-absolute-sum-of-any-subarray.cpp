class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int mx = 0, mn = 0, ps = 0;

        for(int val : nums){
            ps+=val;
            mx = max(mx,ps);
            mn = min(mn,ps);
        }

        return max(mx-mn,abs(mn));
    }
};