class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>comp(nums1.begin(),nums1.end());
        unordered_set<int>res;

        for(int val : nums2){
            if(comp.count(val)){
                res.insert(val);
            }
        }

        return vector<int>(res.begin(),res.end());
    }
};