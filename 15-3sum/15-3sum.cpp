// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         if(nums.size()==0 or nums.size()<3){
//             return {};
//         }
//         sort(nums.begin(),nums.end());
//         set<vector<int>>s;
//         int n = nums.size();
//         vector<vector<int>>vfinal;
//         for(int i=0;i<n-2;i++){
//             for(int j=i+1;j<n-1;j++){
//                 for(int k=j+1;k<n;k++){
//                     int x = nums[i]+nums[j]+nums[k];
//                     if(x==0){
//                         vector<int>v;
//                         v.push_back(nums[i]);
//                         v.push_back(nums[j]);
//                         v.push_back(nums[k]);
//                         if(s.count(v)==0){
//                             vfinal.push_back(v);
//                         }
//                         s.insert(v);
//                         // s.insert({nums[i],nums[j],nums[k]});
//                     }
//                 }
//             }
//         }
//         return vfinal;
//         // vector<vector<int>>vfinal(s.begin(),s.end());
//         // return vfinal;
//     }
// };




//some optimization :- using Map 

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         if(n==0 or n<3){
//             return {};
//         }
//         sort(nums.begin(),nums.end());
//         vector<vector<int>>final;
//         set<vector<int>>s;
//         unordered_map<int,int>mp;
//         for(auto nn:nums){
//             mp[nn]++;
//         }
//         for(int i=0;i<n;i++){
//             mp[nums[i]]--;
//             for(int j=i+1;j<n;j++){
//                 mp[nums[j]]--;
//                 int x = -1*(nums[i]+nums[j]);
//                // int c = -(nums[i]+nums[j]);
//                 if(mp.find(x)!=mp.end()&&mp[x]>0){
//                     vector<int>temp = {nums[i],nums[j],x};
//                     sort(temp.begin(),temp.end());
//                     s.insert(temp);
//             }
//                 mp[nums[j]]++;
//             }
//             mp[nums[i]]++;
//         }
//         // vector<vector<int>>final(s.begin(),s.end());
//         final.assign(s.begin(),s.end());
//         return final;
//     }
// };

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>>ans;
//         if(n==0||n<3)
//             return ans;
        
//         unordered_map<int,int>ump;
        
//         for(auto num:nums){
//             ump[num]++;
//         }
//         set<vector<int>>s;
//         for(int i=0;i<n;i++){
//             ump[nums[i]]--;
//             for(int j=i+1;j<n;j++){
//                 ump[nums[j]]--;
//                 int c = -(nums[i]+nums[j]);
//                     if(ump.find(c)!=ump.end()&&ump[c]>0){
//                         vector<int>temp = {nums[i],nums[j],c};
//                         sort(temp.begin(),temp.end());
//                         s.insert(temp);
//                 }
//                 ump[nums[j]]++;
//             }
//             ump[nums[i]]++;
//         }
//         ans.assign(s.begin(),s.end());
//         return ans;
//     }
// };




class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>final;
        for(int i=0;i<n;i++){
            if((i==0) or (i>0 and nums[i-1]!=nums[i])){
                int lo=i+1,hi=n-1,sum=0-nums[i];
                while(lo<hi){
                    int x = nums[lo];
                    int y = nums[hi];
                    if((x+y)==sum){
                    vector<int>temp = {nums[i],nums[lo],nums[hi]};
                    // lo++,hi--;
                    // sort(temp.begin(),temp.end());
                    final.push_back(temp);
                    while(lo<hi and nums[lo]==nums[lo+1]){
                        lo++;
                    }
                    while(lo<hi and nums[hi]==nums[hi-1]){
                        hi--;
                    }
                    lo++,hi--;
                }
                else if(nums[lo]+nums[hi]<sum){
                    lo++;
                    while(lo<hi and nums[lo]==x){
                            lo++;
                    }
                }
                else if(nums[lo]+nums[hi]>sum){
                    hi--;
                    while(lo<hi and nums[hi]==y){
                            hi--;
                    }
                }
                }
            }
        }
        return final;
    }
};











