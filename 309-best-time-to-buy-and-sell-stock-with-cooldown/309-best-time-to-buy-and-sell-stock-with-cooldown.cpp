class Solution {
public:
    int func(int ind,int buy,vector<int>&values,int n,vector<vector<int>>&dp){
    if(ind >= n){
        return 0;
    }
    if(dp[ind][buy]!=-1){
        return dp[ind][buy];
    }
    int prof = 0;
    if(buy){
        prof = max(-values[ind]+func(ind+1,0,values,n,dp),0+func(ind+1,1,values,n,dp));
    }
    else{
        prof = max(values[ind]+func(ind+2,1,values,n,dp),0+func(ind+1,0,values,n,dp));
    }
    return dp[ind][buy]=prof;
}
    int maxProfit(vector<int>&values) {
        int n = values.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        int ans = func(0,1,values,n,dp);
        return ans;
    }
};