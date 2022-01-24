// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
//         //Sc:-O(N) Tc:-O(m+n)
//         int i=0,j=0;
//         vector<int>res(n+m);
//         int k=0;
//         while(i<m and j<n){
//             if(nums1[i]<nums2[j]){
//                 res[k]=nums1[i];
//                 k++;
//                 i++;
//             }
//             else if(nums1[i]>nums2[j]){
//                 res[k]=(nums2[j]);
//                 k++;
//                 j++;
//             }
//             else if(nums1[i]==nums2[j]){
//                 res[k]=(nums1[i]);
//                 k++;
//                 res[k]=(nums2[j]);
//                 k++;
//                 i++;j++;
//             }
//         }
//         while(i<m){
//             res[k]=(nums1[i]);
//             k++;
//             i++;
//         }
//         while(j<n){
//             res[k]=(nums2[j]);
//             k++;
//             j++;
//         }
//         // cout<<"[";
//         // for(int i=0;i<res.size()-1;i++){
//         //     cout<<res[i]<<",";
//         // }
//         // cout<<res[res.size()-1]<<"]";
//         nums1=res;
//         return;
//     }
// };


//O((m+n)log(m+n))

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         for(int i=0;i<n;i++){
//             nums1[m+i]=nums2[i];
//         }
        
//         sort(nums1.begin(),nums1.end());
//     }
// };


//Two pointer

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int k=(n+m)-1;
        int i=m-1,j=n-1;
        while(i>=0 and j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        while(j>=0){
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
};