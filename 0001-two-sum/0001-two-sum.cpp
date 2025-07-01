class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> temp;

        for(int i = 0; i < nums.size(); i++){
            int req = target - nums[i];
            if(temp.find(req) != temp.end()){
                return {i, temp[req]};
            }
            temp[nums[i]] = i;
        }

        return {};
    }
};