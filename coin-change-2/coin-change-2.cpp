class Solution {
public:
    int change(int n, vector<int>&S) {
        int m=S.size();
        int dp[m+1][n+1];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<=m;i++)
        dp[i][0]=1;
        for(int i=1;i<=n;i++)
        dp[0][i]=0;
        for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
        if(S[i-1]<=j)
        dp[i][j]=dp[i-1][j]+dp[i][j-S[i-1]];
        else
        dp[i][j]=dp[i-1][j];
        }
        }
        
        return dp[m][n];
    }
};