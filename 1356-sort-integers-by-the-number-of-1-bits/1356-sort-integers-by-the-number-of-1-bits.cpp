class Solution {
public:
    vector<int> sortByBits(vector<int>& nums) {
        map<int,vector<int>>mp;
        int n = nums.size();
        for(auto it:nums){
            int x = __builtin_popcount(it);
            mp[x].push_back(it);
        }
        vector<int>ans;
        for(auto m:mp){
            auto it1=m.second;
            sort(it1.begin(),it1.end());
            int n = it1.size();
            ans.insert(ans.end(),it1.begin(),it1.end());
        }
        return ans;
    }
};