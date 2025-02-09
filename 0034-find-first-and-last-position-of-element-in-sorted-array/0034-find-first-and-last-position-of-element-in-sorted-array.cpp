class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     int n = nums.size();
     int l = 0;
     int h = n-1;


     vector<int>a = {-1,-1};


        while(l<=h){
            int mid = l + (h - l) / 2;

            if(nums[mid]>target){
                h = mid-1;
            }else if(nums[mid]<target){
                l = mid+1;
            }else{
                a[0]=mid;
                h=mid-1;
            }
        }
l=0,h=n-1;
        while(l<=h){
            int mid = l + (h - l) / 2;

            if(nums[mid]>target){
                h = mid-1;
            }else if(nums[mid]<target){
                l = mid+1;
            }else{
                a[1]=mid;
                l = mid+1;
                }
            }
        return a;
    }
};