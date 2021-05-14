class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        
        int n=nums2.size();
        int f=m+n;
        vector<int>arr(f);
        ::merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),arr.begin());
        if(f%2==0){
            double res=(double(arr[f/2])+double(arr[f/2-1]))/2;
            return res;
        }
        else{
            double res1=(double(arr[f/2]));
            return res1;
        }
    }
};