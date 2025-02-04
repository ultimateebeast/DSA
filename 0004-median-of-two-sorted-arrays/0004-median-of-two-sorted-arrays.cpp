class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int a = nums1.size();
        int b = nums2.size();
        int c = a+b;

        vector<int> f;
        f.reserve(c);

        f.insert(f.end(),nums1.begin(),nums1.end());
        f.insert(f.end(),nums2.begin(),nums2.end());
        sort(f.begin(),f.end());
        double num1 = 1,num2=1,final=1;
        if(c%2 != 0){
            int k = (c+1)/2;
            final= f[k-1];
        }
        else{
            int q = (c/2);
            num1 = f[q-1];
            num2 = f[q];
            final = (num1+num2)/2;
        }
        return final;
    }
};