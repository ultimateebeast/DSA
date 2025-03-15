class Solution {
public:
    bool judgeSquareSum(int c) {

        bool ans = false;

        long long left = 1;
        long long right = sqrt(c);

        if(right * right == c){
            return true;
        }

        while(left <= right){
            long long res = (left * left) + (right * right);
            if(res == c){
                return true;
            }
            if(res > c){
                right--;
            }
            if(res < c){
                left++;
            }
        }

        return ans;
    }
};