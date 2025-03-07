class Solution {
public:
    int search(vector<int>& nums, int target) {
        int numsSize = nums.size();
        int startIndex = 0;
        int endIndex = numsSize - 1;

        while(startIndex <= endIndex){
            int mid = (startIndex + endIndex)/2;

            if(nums[mid] == target){
                return mid;
            }

            if(nums[mid] < target){
                startIndex = mid + 1;
            }

            if(nums[mid] > target){
                endIndex = mid - 1;
            }
        }
        return -1;
    }
};