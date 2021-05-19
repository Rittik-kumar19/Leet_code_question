
class Solution {
public:
    int climbStairs(int n) {
       int *ans=new int[n+1];
        for(int i=0;i<=n;i++){
            ans[i]=-1;
        }
        int o=cl(n,ans);
        return o;          
       
        
    }
    int cl(int n,int *ans){
        if(n==0){
            ans[n]=1;
            return ans[n];
        }
        if(n<0){
            // ans[n]=0;
            return 0;
        }
        if(ans[n]!=-1){
            return ans[n];
        }
        int x=cl(n-1,ans);
        int y=cl(n-2,ans);
        int out=x+y;
        ans[n]=out;
        // return ans[n];
        return out;
    }
};