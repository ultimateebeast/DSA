class Solution {
public:
    string largestNumber(vector<int>& nums) {

        vector<string> temp;
        for (int num : nums) {
            temp.push_back(to_string(num));
        }
        sort(temp.begin(), temp.end(), [](const string &a, const string &b) {
            return (b + a) < (a + b);
        });

        if (temp[0] == "0") {
            return "0";
        }
        string res;
        for (const string &num : temp) {
            res += num;
        }

        return res;
    }
};