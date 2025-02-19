class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int numSize = nums.size();
        int count = 0;
        int preSum = 0;

        map<int,int>mpp;
        mpp[0] = 1;
        for(int i=0;i<numSize;i++){
            preSum+=nums[i];
            int remove = preSum - k;
            count+=mpp[remove];
            mpp[preSum]++; 
        }

        return count;
    }
};