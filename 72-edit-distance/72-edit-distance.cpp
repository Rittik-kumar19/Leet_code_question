class Solution {
public:
    int func(int i,int j,string word1,string word2,vector<vector<int>>&dp){
        if(i==0)return j;
        if(j==0)return i;
        
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        
        if(word1[i-1]==word2[j-1]){
            return dp[i][j] = func(i-1,j-1,word1,word2,dp);
        }
        else{
            return dp[i][j] = min({1+func(i,j-1,word1,word2,dp),1+func(i-1,j,word1,word2,dp),1+func(i-1,j-1,word1,word2,dp)});
        }
    }
    int minDistance(string word1, string word2) {
       int n = word1.size();
       int m = word2.size();
       vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       int ans = func(n,m,word1,word2,dp);
       return ans;
    }
};