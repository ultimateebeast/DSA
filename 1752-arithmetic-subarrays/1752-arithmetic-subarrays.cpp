class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>res;

        for(int i=0;i<l.size();i++){
            vector<int>sarr(nums.begin()+l[i] , nums.begin()+r[i]+1);
            res.push_back(check(sarr));
        }
        return res;


    }
private:
    bool check(vector<int>&sarr){
        sort(sarr.begin(),sarr.end());
        int diff = sarr[1] - sarr[0];
        for(int i=2;i<sarr.size();i++){
            if(sarr[i]-sarr[i-1] != diff){
                return false;
            }
        }
        return true;
    }
};