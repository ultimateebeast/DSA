class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cntPos = 0;
        int cntNeg = 0;

        for(int val : nums){
            if(val < 0) cntNeg++;
            if(val > 0) cntPos++;
        }

        return max(cntNeg, cntPos);
    }
};