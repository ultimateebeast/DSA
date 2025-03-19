class Solution {
public:
    int minOperations(vector<int>& nums) {
        int sz = nums.size();
        int count = 0;
        
        for(int i = 0; i < sz - 2; i++){
            if(nums[i] == 0){
                count++;
                nums[i + 1] ^= 1 ^ 0;
                nums[i + 2] ^= 1 ^ 0;
            }
        }
        return nums[sz - 1] && nums[sz - 2] ? count : -1;
    }
};