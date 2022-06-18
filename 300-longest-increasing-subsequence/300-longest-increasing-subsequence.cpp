class Solution {
public:
    int func(int ind,int prev_ind,vector<int>&nums,int n,vector<vector<int>>&dp){
        if(ind ==n)return 0;
        if(dp[ind][prev_ind+1]!=-1){
            return dp[ind][prev_ind+1];
        }
        int len = func(ind+1,prev_ind,nums,n,dp);
        if(prev_ind == -1 || (nums[ind]>nums[prev_ind])){
            len = max(len,1+func(ind+1,ind,nums,n,dp));
        }
        return dp[ind][prev_ind+1]=len;
    }
    // int lengthOfLIS(vector<int>& nums) {
    //     int n = nums.size();
    //     vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    //     // int ans = func(0,-1,nums,n,dp);
    //     // return ans;
    //     for(int ind=n-1;ind>=0;ind--){
    //         for(int prev = ind-1;prev>=-1;prev--){
    //             int len = dp[ind+1][prev+1];
    //             if(prev == -1 || (nums[ind]>nums[prev])){
    //                 len = max(len,1+dp[ind+1][ind+1]);
    //             }
    //             dp[ind][prev+1]=len;
    //         }
    //     }
    //     return dp[0][-1+1];
    // }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // vector<vector<int>>dp(n+1,vector<int>(n+1,0));
        vector<int>next(n+1,0),cur(n+1,0);
        // int ans = func(0,-1,nums,n,dp);
        // return ans;
        for(int ind=n-1;ind>=0;ind--){
            for(int prev = ind-1;prev>=-1;prev--){
                int len = next[prev+1];
                if(prev == -1 || (nums[ind]>nums[prev])){
                    len = max(len,1+next[ind+1]);
                }
                cur[prev+1]=len;
            }
            next=cur;
        }
        return next[-1+1];
    }
};