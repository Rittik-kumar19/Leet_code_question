class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n=nums1.size();
        // int cnt=0;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         for(int k=0;k<n;k++){
        //             for(int m=0;m<n;m++){
        //                 int xx=nums1[i]+nums2[j]+nums3[k]+nums4[m];
        //                 if(xx==0){
        //                     cnt++;
        //                 }
        //             }
        //         }
        //     }
        // }
        // return cnt;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[(nums1[i]+nums2[j])]++;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans=ans+mp[-1*(nums3[i]+nums4[j])];
            }
        }
        return ans;
    }
};