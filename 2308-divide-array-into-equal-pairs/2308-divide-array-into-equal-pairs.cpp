class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int>frq(501,0);

        for(int val : nums){
            frq[val]++;
        }

        for(int cnt : frq){
            if(cnt % 2 != 0) return false;
        }

        return true;
    }
};