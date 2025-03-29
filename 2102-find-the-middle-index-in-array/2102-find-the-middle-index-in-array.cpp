class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int leftTotal = 0;

        for(int i = 0; i < nums.size(); i++){
            int rightTotal = total - leftTotal - nums[i];

            if(leftTotal == rightTotal){
                return i;
            }
            leftTotal += nums[i];
        }
        return -1;
    }
};