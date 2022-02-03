class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n3 = nums3.size();
        int n4 = nums4.size();
        
        int cnt = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
               mp[nums1[i]+nums2[j]]++; 
            }
        }
        for(int i=0;i<n3;i++){
            for(int j=0;j<n4;j++){
                int sum = nums3[i]+nums4[j];
                int search = (-1)*sum;
                if(mp.count(search)>0){
                    cnt+=mp[search];
                }
            }
        }
        return cnt;
    }
};