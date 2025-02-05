

class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return 1;

        int inc = 1;
        int dec = 1;
        int counti = 1 , countd = 1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                counti++;
            }
            else {
                inc = max(inc, counti);
                counti = 1;
            }

            if (nums[i]>nums[i+1]) {
                countd++;
            }
            else{
                dec = max(dec,countd);
                countd = 1;
            }
        }
        inc = max(inc, counti);
        dec = max(dec,countd);

        return max(inc, dec);
    }
};
