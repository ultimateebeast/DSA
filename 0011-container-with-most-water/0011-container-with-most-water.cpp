class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxm = 0;
        int end = height.size() - 1;
        int left = 0;
        while(left<end){
            maxm = max(maxm , (end-left) * min(height[left],height[end]));
            if(height[left] < height[end]){
                left++;
            }        
            else{
                end--;
            }
        }
        return maxm;
    }
};