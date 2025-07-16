class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // if(nums.size() == 1) return nums[0];

        // unordered_map<int, int> cnt;

        // for(int val : nums){
        //     cnt[val]++;
        // }

        // for(auto val : cnt){
        //     if(val.second == 1) return val.first;
        // }

        // return -1;



        int res = 0;

        for(int val : nums){
            res ^= val;
        }

        return res;
    }
};