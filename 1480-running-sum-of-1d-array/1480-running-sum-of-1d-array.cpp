class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int>v(n+1,0);
        for(int i=1;i<=n;i++){
            v[i]=v[i-1]+nums[i-1];
        }
        vector<int>ans(n,0);
        for(int i = 0;i<n;i++){
            ans[i]=v[i+1];
        }
        return ans;
    }
};