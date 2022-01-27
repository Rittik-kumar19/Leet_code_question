class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
       long long n = nums.size();
       vector<long long>pre(n+1,0);
       vector<long long>suf(n+1,0);
        
       for(int i=1;i<=n;i++){
           pre[i]=pre[i-1]+nums[i-1];
       }
       suf[n]=nums[n-1];
       for(int j=n-1;j>=1;j--){
           suf[j]=suf[j+1]+nums[j-1];
       }
        
        // for(int i=1;i<=n;i++){
        //     cout<<suf[i]<<" ";
        // }
        // cout<<endl;
        
        long long lsum = 0;
        long long rsum =suf[2];
        if(n==1){
            return 0;
        }
        for(int i=1;i<=n;i++){            
            if(i>1 and i<n){
                lsum = lsum + nums[i-2];
                rsum = rsum-nums[i-1];
                
            }
            if(i>1 and i==n){
                lsum = lsum + nums[i-2];
                rsum = 0;
            }
              
            if(lsum == rsum){
                return (i-1);
            }
            // cout<<lsum<<" "<<rsum<<endl;
        }
        return -1;
        
    }
};