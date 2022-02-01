class Solution {
public:
     bool static cmp(pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return (a.second>b.second);
        }
        return (a.first<b.first);
    }
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>mpp;
        for(auto n:nums){
            mpp[n]++;
        }
        vector<pair<int,int>>vpp;
        for(auto m:mpp){
            vpp.push_back({m.second,m.first});
        }
        sort(vpp.begin(),vpp.end(),cmp);
        vector<int>ans;
        for(auto vv:vpp){
            for(int i=0;i<vv.first;i++){
                ans.push_back(vv.second);
            }
        }
        return ans;
    }
};