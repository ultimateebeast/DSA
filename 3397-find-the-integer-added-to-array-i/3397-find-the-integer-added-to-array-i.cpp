class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        auto it = min_element(nums1.begin(),nums1.end());
        auto it1 = min_element(nums2.begin(),nums2.end());

        return (*it1 - *it);
    }
};