
class Solution {
public:
    int tribonacci(int n) {
       int *dp=new int[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        int res=trib(n,dp);
        return res;
    }
    int trib(int n,int * dp){
        if(n==0){
            dp[n]=0;
            return dp[n];
        }
        if(n==1){
            dp[n]=1;
            return dp[n];
        }
        if(n==2){
            dp[n]=1;
            return dp[n];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=trib(n-1,dp)+trib(n-2,dp)+trib(n-3,dp);
        return dp[n];
    }
};