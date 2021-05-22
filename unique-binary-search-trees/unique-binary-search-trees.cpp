class Solution {
public:
    int numTrees(int n) {
        //isme simple formula hota hai yaad rakhna 
        // C4=C0C3+C1C2+C2C1+C3C0
        int dp[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=0;
        }
        dp[0]=1,dp[1]=1;
        for(int i=2;i<=n;i++){
            int p=0;
            int q=i-1;
            while(p!=(i)){
                dp[i]=dp[i]+(dp[p]*dp[q]);
                p++;
                q--;
            }
        }
        return dp[n];
    }
};