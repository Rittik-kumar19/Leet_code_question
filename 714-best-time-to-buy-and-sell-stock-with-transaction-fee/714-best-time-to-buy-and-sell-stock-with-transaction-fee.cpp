class Solution {
public:
    int func(int ind,int buy,vector<int>&values,int n,vector<vector<int>>&dp,int fee){
    if(ind >= n){
        return 0;
    }
    if(dp[ind][buy]!=-1){
        return dp[ind][buy];
    }
    int prof = 0;
    if(buy){
        prof = max(-values[ind]+func(ind+1,0,values,n,dp,fee),0+func(ind+1,1,values,n,dp,fee));
    }
    else{
        prof = max(values[ind]-fee+func(ind+1,1,values,n,dp,fee),0+func(ind+1,0,values,n,dp,fee));
    }
    return dp[ind][buy]=prof;
}
    int maxProfit(vector<int>& values, int fee) {
        int n = values.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        int ans = func(0,1,values,n,dp,fee);
        return ans;
    }
};