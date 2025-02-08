class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        set<double>temp;
        sort(nums.begin(),nums.end());
        int n = nums.size();

        int start = 0 , last = n-1;

        while(start<last){
            double avg = (double)(nums[start] + nums[last])/2.0;
            temp.insert(avg);
            start++;
            last--;
        }

        return temp.size();
    }
};