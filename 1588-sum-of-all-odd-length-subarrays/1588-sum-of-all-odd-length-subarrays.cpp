class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        long long  n = nums.size();
        long long sum = 0;
        
        for(int i = 0;i<n;i++){
            sum += nums[i];
        }
        vector<int>pf(n+1,0);
        for(int i=1;i<=n;i++){
            pf[i]=pf[i-1]+nums[i-1];
        }
        
        if(n%2==1){
            for(int k=3;k<=n;k+=2){
                int p = 1;
                int t = k;
                while(t<=n){
                    sum+=(pf[t]-pf[p-1]);
                    p++;
                    t++;
                }
            }
        }
        else if(n%2==0){
            for(int k=3;k<=n-1;k+=2){
                int p1 = 1;
                int t1 = k;
                while(t1<=n){
                    sum+=(pf[t1]-pf[p1-1]);
                    p1++;
                    t1++;
                }
            }
        }
        
        return sum;
        
    }
};