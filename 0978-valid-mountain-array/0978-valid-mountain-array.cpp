class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int start = 0;
        int arrSz = arr.size();

        if(arrSz < 3) return false;

        while(start + 1 < arrSz && arr[start] < arr[start + 1]) start++;

        if(start == 0 || start == arrSz - 1) return false;

        while(start + 1 < arrSz && arr[start] > arr[start + 1]) start++;

        return arrSz == start + 1;
    }
};