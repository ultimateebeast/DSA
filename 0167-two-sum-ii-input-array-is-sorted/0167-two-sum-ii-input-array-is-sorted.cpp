class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0 ;
        int right = n-1;

        int sum = 0;
        while(left<right){
            sum = numbers[left] + numbers[right];

            if(sum == target){
                return {left+1,right+1};
            }
            if(sum > target){
                right--;
            } 
            if(sum < target){
                left++;
            }
        }
        return {};
    }
};