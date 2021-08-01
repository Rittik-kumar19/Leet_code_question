class Solution {
public:
    int dp[100];
    // memset(dp,-1,sizeof(dp));
    int fibo(int n){
        if(n<=1){
           dp[n]=n;
           return n;
       }
       if(dp[n]!=-1){
           return dp[n];
       }
       dp[n]=fib(n-1)+fib(n-2);
       return dp[n];
    }
    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        return fibo(n);
    }
};