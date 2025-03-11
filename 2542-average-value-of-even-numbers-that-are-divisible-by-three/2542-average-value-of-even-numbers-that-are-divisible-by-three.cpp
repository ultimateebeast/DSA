class Solution {
public:
    int averageValue(vector<int>& nums) {
        int res = 0;
        int count = 0;
        for(int val : nums){
            if(val%6 == 0){
                res+=val;
                count++;
            }
        }
        if(count == 0) return 0;
        return res/count;
    }
};