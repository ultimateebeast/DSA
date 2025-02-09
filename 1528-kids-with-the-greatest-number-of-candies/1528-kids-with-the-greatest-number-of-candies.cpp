class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> num1;
        auto it = max_element(candies.begin(),candies.end());
        int maxm = (*it);

        for(int i=0;i<candies.size();i++){
            int val = candies[i] + extraCandies;
            if(val >= maxm){
                num1.push_back(true);
            }
            else{
                num1.push_back(false);
            }
        }
        
        return num1;
    }
};