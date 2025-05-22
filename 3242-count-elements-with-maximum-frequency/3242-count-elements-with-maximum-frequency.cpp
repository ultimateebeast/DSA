class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> frq;

        for(int val : nums){
            frq[val]++;
        }

        vector<int> temp;

        for(auto val : frq){
            temp.push_back(val.second);
        }

        sort(temp.begin(), temp.end(), greater<int>());

        int res = temp[0];

        for(int i = 1; i < temp.size(); i++){
            if(temp[0] == temp[i]) res+=temp[i];
            else break;
        }

        return res;
    }
};