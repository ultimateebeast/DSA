class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>s;

        vector<int>res;


        int n = nums.size();

        for(int i=0;i<n;i++){
            s[nums[i]]++;
        }

        vector<pair<int,int>>result(s.begin(),s.end());


        sort(result.begin(),result.end(),[](const auto &a,const auto &b ){
            return a.second>b.second;
        });
        int i = 0;
        for(const auto &val : result){
            if(i < k){
                res.push_back(val.first);
            }
            i++;
        }

        return res;
    }
};