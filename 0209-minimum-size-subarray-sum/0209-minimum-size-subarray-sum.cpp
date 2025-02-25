class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int s = nums.size(), sum = 0;
        int i = 0, j = 0, mini = INT_MAX;

        while(j < s){
            sum += nums[j];

            while(sum >= target){
                mini = min(mini, j - i + 1);
                sum -= nums[i];
                i++;
            }
            j++;
        }

        if(mini == INT_MAX) return 0 ;
        return mini;
    }
};