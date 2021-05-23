class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int dp[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=0;
        }
        dp[0]=1;
        for(int i=1;i<n;i++){
            int mx=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    if(dp[j]>mx){
                        mx=dp[j];
                    }
                }
            }
            dp[i]=mx+1;
        }
        int x=0;
        for(int i=0;i<=n;i++){
            x=max(x,dp[i]);
        }
        return x;
    }
};