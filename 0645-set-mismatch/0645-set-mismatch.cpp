class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int dupl = -1, miss = -1;

        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] == nums[i]){
                dupl = nums[i];
            }
            else if(nums[i] > nums[i - 1] + 1){
                miss = nums[i - 1] + 1;
            }
        }

        if (miss == -1) {
            if (nums[0] != 1) miss = 1;
            else miss = nums.size();
        }
        
        return {dupl, miss};
    }
};