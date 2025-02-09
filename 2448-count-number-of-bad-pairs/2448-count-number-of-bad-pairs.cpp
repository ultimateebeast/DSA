class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, long long> freq;
        long long n = nums.size();
        long long totalPairs = (n * (n - 1)) / 2; 
        long long goodPairs = 0;

        for(int i = 0; i < n; i++) {
            int val = nums[i] - i;
            goodPairs += freq[val];
            freq[val]++; 
        }

        return totalPairs - goodPairs; 
    }
};
