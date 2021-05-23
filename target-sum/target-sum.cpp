class Solution {
public:
//     int findTargetSumWays(vector<int>& nums, int target) {
        
//         int n=nums.size();
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum=sum+nums[i];
//         }
//         int tt=(sum+target);
//         int t=0;
//         if(tt&1){
//             t=(tt+1)/2;
//         }
//         else{
//             t=tt/2;
//         }
//         vector<vector<int>>dp(n+1,vector<int>(t+1));
//         for(int i=0;i<=n;i++){
//            dp[i][0]=1; 
//         }
//         for(int j=1;j<=t;j++){
//             dp[0][j]=0;
//         }
//         for(int i=1;i<=n;i++){
//             for(int j=1;j<=t;j++){
//                 if(nums[i-1]<=j){
//                     dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
//                 }
//                 else{
//                     dp[i][j]=dp[i-1][j];
//                 }
//             }
//         }
//         return dp[n][t];
//     }
    int subsetsumcount(vector<int>& nums,int sum)
    {
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(sum+1));
        
        for(int i=0;i<=sum;i++)//for any sum not possible array is empty  By default vector is initialised to 0
            dp[0][i] = 0;
        
        for(int i=0;i<=n;i++)//0 sum one way not to choose any element
            dp[i][0] = 1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(nums[i-1]<=j&&nums[i-1]!=0)
                    dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
                else
                    dp[i][j] =  dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    
    
    int findTargetSumWays(vector<int>& nums, int S) {
        //if we take out - common from elements with - sign we get
        // (a1+a2....) - (b1+b2...) let these sum be A and B
        //  A - B = S(target) --> given
        // and A+B = sum of array 
        // equating we get 2*A = (target + Array sum)
        // A = (target + Array sum)/2
        // we just need to find count of ways we can get this subset with Sum A
        int arraysum = accumulate(nums.begin(),nums.end(),0);//calculate sum
        if(S>arraysum||(arraysum+S)%2==1)//S>array sum or their sum is odd then it's not possible
            return 0;
        int Asum = (arraysum+S)/2;
        //count of 0's as + or - both can be assigned to 0 without making any difference to sum we need 
        int c = count(nums.begin(),nums.end(),0);//but count is required to calculate number of ways
        return pow(2,c)*subsetsumcount(nums,Asum);//for every 0 we have 2 options 
    }
};