class Solution {
public:
    bool canPartition(vector<int>& arr) {
        int sum=0;
        int N=arr.size();
        for(int i=0;i<N;i++){
            sum=sum+arr[i];
        }
        if(sum&1){
            return false;
        }
        else{
            bool issub=subsetsum(arr,N,sum/2);
            if(issub){
                return true;
            }
            else{
                return false;
            }
        }
    }
     bool subsetsum(vector<int>&arr,int N,int s){
        int n=N;
        vector<vector<bool>>dp(n+1,vector<bool>(s+1));
//         for(int i=0;i<=n;i++){
//             for(int j=0;j<=s;j++){
//                 if(i==0 || j==0){
//                     dp[i][j]=true;
//                 }
                
//             }
//         }
         for(int i = 0; i <= n; i++)
            dp[i][0] = true;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=s;j++){
                if(j<arr[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
                }
            }
        }
        return dp[N][s];
    }
};