class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> res(nums.size(), pivot);

        int start = 0;
        int end = nums.size() - 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < pivot) {
                res[start] = nums[i];
                start++;
            }
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] > pivot) {
                res[end] = nums[i];
                end--;
            }
        }

        return res;
    }
};