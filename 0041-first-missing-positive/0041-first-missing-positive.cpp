class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> temp;

        for(int val : nums){
            if(val>0){
                temp.insert(val);
            }
        }
        int minValue = 1;
        for(int res : temp){
            if(minValue == res){
                minValue++;
            }
            else{
                break;
            }
        }
        return minValue;
    }
};