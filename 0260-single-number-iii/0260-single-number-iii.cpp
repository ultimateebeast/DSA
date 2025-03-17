class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>res;

        unordered_map<int,int>mpp;

        for(int val : nums){
            mpp[val]++;
        }

        for(auto val : mpp){
            if(val.second == 1) res.push_back(val.first);
        }

        return res;
    }
};