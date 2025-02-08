class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int prev = -1;
        int maxCount = 0;

        for (int i = 0; i < n; i++) {
            if (forts[i] == 1 || forts[i] == -1) {
                if (prev != -1 && forts[i] != forts[prev]) {  
                    maxCount = max(maxCount, i - prev - 1);
                }
                prev = i; 
            }
        }
        return maxCount;
    }
};
