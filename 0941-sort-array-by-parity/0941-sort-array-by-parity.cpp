class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int sz = nums.size();

        int left = 0;
        int right = sz - 1;

        while(left < right){
            if(nums[left] % 2 == 0){
                left++;
            }
            else{
                swap(nums[left], nums[right]);
                right--;
            }
        }

        return nums;
    }
};