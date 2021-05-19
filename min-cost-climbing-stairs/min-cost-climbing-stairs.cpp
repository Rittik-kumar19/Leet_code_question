class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        int *ans=new int[n+1];
        for(int i=0;i<=n;i++){
            ans[i]=-1;
        }
        
        int x=cl(cost,n,ans);
        return x;
    }
    int cl(vector<int>& cost,int n,int *ans){
        if(n==0 || n==1){
            ans[n]=0;
            return ans[n];
        }
        if(ans[n]!=-1){
            return ans[n];
        }
        int x=cl(cost,n-1,ans)+cost[n-1];
        int y=cl(cost,n-2,ans)+cost[n-2];
        ans[n]= min(x,y);
        return ans[n];
    }
};