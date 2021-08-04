class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int> >mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        if(k==0){
            return false;
        }
        for(auto x:mp){
            if(x.second.size()<2){
                continue;
            }
            vector<int>ans=x.second;
            for(int i=0;i<ans.size()-1;i++){
                for(int j=1;j<ans.size();j++){
                    if(abs(ans[j]-ans[i])<=k){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};