class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        vector<int>prefix(n+1,0);
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+nums[i];
        }
        unordered_map<int,int>mp;
        for(int i=1;i<=n;i++){
            if(prefix[i]==k){
                cnt++;
            }
            if(mp.find(prefix[i]-k)!=mp.end()){
                cnt+=mp[prefix[i]-k];
            }
            mp[prefix[i]]++;
        }
        return cnt;
    }
};