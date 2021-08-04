class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int>ans;
        for(auto m:mp){
            ans.push_back(m.first);
        }
        reverse(ans.begin(),ans.end());
        return (ans.size()>=3?ans[2]:ans[0]);
    }
};