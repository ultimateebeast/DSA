class Solution {
public:
    string frequencySort(string s) {
        map<char, int> res;  

        for (char val : s) {
            res[val]++;
        }

        map<int, vector<char>, greater<int>> res1;  

        for (auto val : res) {
            res1[val.second].push_back(val.first);
        }

        string result = "";

        for (auto val : res1) {
            for (char ch : val.second) {
                result += string(val.first, ch);  
            }
        }
        return result;
    }
};

