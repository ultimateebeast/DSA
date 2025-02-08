class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if(n<2){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int val = 0;
        int maxm = INT_MIN;
        for(int i=1;i<n;i++){
            val = nums[i] - nums[i-1];
            maxm = max(val,maxm);
        }

        return maxm;
    }
};