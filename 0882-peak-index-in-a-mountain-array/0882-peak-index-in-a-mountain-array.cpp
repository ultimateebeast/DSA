class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;

        int mid = (low+high)/2;

        while(low<=high){
            mid = (low+high)/2;
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]<arr[mid+1] && arr[mid]>arr[mid-1]){
                low = mid;
            }
            else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
                high = mid;
            }
        }
        return -1;
    }
};