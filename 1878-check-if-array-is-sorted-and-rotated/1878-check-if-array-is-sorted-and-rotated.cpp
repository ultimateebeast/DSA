class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return true;
        }

        int minV = nums[0];
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                count++;
            }

            minV = min(minV, nums[i + 1]);
        }

        if (nums[n - 1] > nums[0]) {
            count++;
        }
        return count <= 1;
    }
};