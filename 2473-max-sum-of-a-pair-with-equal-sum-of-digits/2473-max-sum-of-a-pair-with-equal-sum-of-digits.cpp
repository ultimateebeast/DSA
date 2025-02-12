class Solution {
public:
    int maximumSum(vector<int>& nums) {
        vector<int>res(82,0);
        int maxm = -1;
        int n = nums.size();

        for(int val : nums){
            int sum = 0,temp = val;
            while(temp!=0){
                sum+=temp%10;
                temp/=10;
            }
            if(res[sum]!=0) maxm = max(maxm, val+res[sum]);
            res[sum] = max(res[sum],val);
        }
        return maxm;
    }
};