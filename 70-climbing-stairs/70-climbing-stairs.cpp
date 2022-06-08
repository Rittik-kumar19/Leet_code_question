class Solution {
public:
    int fun(long long nStairs,vector<long long int>&dp){
    if(nStairs==0){
        return dp[nStairs]= 1;
    }
    if(nStairs==1){
        return dp[nStairs]= 1;
    }
    if(dp[nStairs]!=-1){
        return dp[nStairs];
    }
    dp[nStairs-1]=fun(nStairs-1,dp);
    dp[nStairs-2] = fun(nStairs-2,dp);
    return dp[nStairs]=dp[nStairs-1]+dp[nStairs-2];
}
    int climbStairs(int n) {
        vector<long long int>dp(n+1,-1);
        int ans = fun(n,dp);
//     cout<<ans<<endl;
         return ans;
    }
};