class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int sz = nums.size();
        if (sz == 1) return true;

        int inc = 0;
        int dsc = 0;
        for(int i = 1; i < sz; i++){
            if(nums[i] >= nums[i - 1]) inc++;
            if(nums[i] <= nums[i - 1]) dsc++;
        }

        return inc == sz - 1 ||dsc == sz - 1;
    }
};