class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        int ans=0;
        unordered_map<int,int> index;
        for(int i=0;i<n;i++) 
            index[arr[i]] = i;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) 
            {
                int key = arr[j]-arr[i];
                int idx = (index.find(key)!=index.end()) ? index[key] : -1;
                if(idx > -1 && idx < i) {
                    dp[i][j] = max(dp[i][j] , 1+dp[idx][i]) ;
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return (ans == 0)? 0 : ans+2;
    }
};