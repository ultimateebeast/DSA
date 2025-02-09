class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> temp;
        sort(nums.begin(), nums.end());

        do {
            temp.push_back(nums);
        } while (next_permutation(nums.begin(), nums.end()));

        return temp;
    }
};