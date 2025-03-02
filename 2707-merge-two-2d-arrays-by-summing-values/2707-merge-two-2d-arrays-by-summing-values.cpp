class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        int row = nums1.size();
        int row1 = nums2.size();

        map<int, vector<int>> m;
        for (int i = 0; i < row; i++) {
            int a = nums1[i][0];
            int b = nums1[i][1];
            m[a].push_back(b);
        }
        for (int i = 0; i < row1; i++) {
            int a = nums2[i][0];
            int b = nums2[i][1];
            m[a].push_back(b);
        }
        vector<vector<int>> res(m.size());
        int i = 0;
        for(auto val : m){
            res[i].push_back(val.first);
            int sum = 0;
            for(auto val1 : val.second){
                sum+=val1;
            }
            res[i].push_back(sum);
            i++;
        }
        return res;
    }
};