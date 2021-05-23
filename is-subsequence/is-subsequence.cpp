class Solution {
public:
      int lcs(int x, int y, string s1, string s2)
    {
        int dp[x+1][y+1];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        for(int i=1;i<=x;i++){
            for(int j=1;j<=y;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[x][y];
    }
    bool isSubsequence(string s, string p) {
        int m=s.size();
        int n=p.size();
        if(m==0){
            return true;
        }
        if(n==0){
            return false;
        }
        if(n==0 && m==0){
            return true;
        }
        int z=min(m,n);
        int r=lcs(m,n,s,p);
        if(r==z){
            return true;
        }
        else{
            return false;
        }
    }
};