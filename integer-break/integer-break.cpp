class Solution {
public:
    int integerBreak(int n) {
         vector<int> dp(n+5);
        dp[1]=0;
        dp[2]=1;
        dp[3]=2;
        for(int i=4;i<=n;i++){
            int ma=INT_MIN;
            for(int j=1;j<i;j++){
                ma=max(ma,max(j*(i-j),j*dp[i-j]));
            }
            dp[i]=ma;
        }
        
        return dp[n];
    }
};