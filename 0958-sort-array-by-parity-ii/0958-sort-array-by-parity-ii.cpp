class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int sz = nums.size();

        int left = 0;
        int right = 1;

        while(left < sz && right < sz){
            if(nums[left] % 2 == 0){
                left+=2;
            }
            else if(nums[right] % 2 == 1){
                right+=2;
            }
            else{
                swap(nums[left],nums[right]);
                left+=2;
                right+=2;
            }
        }
        return nums;
    }
};