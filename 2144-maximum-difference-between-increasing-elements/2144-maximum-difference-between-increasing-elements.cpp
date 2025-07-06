class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi = -1;

        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                if(nums[j] > nums[i]){
                    int diff = nums[j] - nums[i];
                    maxi = max(maxi, diff);
                }
            }
        }
        return maxi;
    }
};