class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        if(nums.size() == 1){
            return 1;
        }

        set<int> s;
        for (int val : nums) {
            s.insert(val);
        }

        vector<int> c(s.begin(),s.end());
        // for(int val : c){
        //     cout<<val<<" ";
        // }
        int start = c[0];
        int count = 0;
        int maxm = 0;
        for (int i=0;i<c.size();i++) {
            if(start == c[i]){
                count++;
                start++;
            }
            else{
                maxm = max(count,maxm);
                count = 1;
                start = c[i]+1;
            }
        }
        return max(count,maxm);
    }
};