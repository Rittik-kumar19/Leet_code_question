class Solution {
public:
    bool func(int i,int j,string &p,string &s,vector<vector<int>>&dp){
        if(i<0 and j<0)return true;
        if(i<0 and j>=0)return false;
        if(j<0 and i>=0){
            for(int x = 0;x<=i;x++){
                if(p[x]!='*')return false;
            }
            return true;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(p[i]==s[j] || p[i]=='?'){
            return dp[i][j] = func(i-1,j-1,p,s,dp);
        }
        if(p[i]=='*'){
            return dp[i][j]=  (func(i-1,j,p,s,dp) | func(i,j-1,p,s,dp));
        }
        return dp[i][j] =  false;
    }
    bool isMatch(string s, string p) {
        int n = p.size();
        int m = s.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return func(n-1,m-1,p,s,dp);
    }
};