class Solution {
public:
    int findGCD(vector<int>& nums) {
        auto it = min_element(nums.begin(),nums.end());
        auto it1 = max_element(nums.begin(),nums.end());

        return __gcd(*it,*it1);
    }
};