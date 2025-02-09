class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>frq;
        vector<vector<int>>res;

        for(int i=0;i<nums.size();i++)
        {
            frq[nums[i]]++;
        }

        int maxFreq = 0;
        for(auto it : frq){
            maxFreq = max(maxFreq,it.second);
        }

        res.resize(maxFreq);

        for(auto it : frq){
            int val = it.second;
            int val1 = it.first;
            for(int i=0;i<val;i++){
                res[i].push_back(val1);
            }
        }
        return res;
    }
};