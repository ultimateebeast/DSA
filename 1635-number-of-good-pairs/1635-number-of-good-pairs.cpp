class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        int nmSi = nums.size();
        for(int i = 0; i < nmSi - 1; i++){
            for(int j = i + 1; j < nmSi; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};