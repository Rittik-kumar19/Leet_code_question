class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        // int sum = accumulate(nums.begin(),nums.end(),0);
        // int n = nums.size();
        // int x = sum;
        // int p = 0;
        // for(int i=0;i<n;i++){
        //     if(i>0){
        //         p=p+nums[i-1];
        //     }
        //     x=x-nums[i];
        //     if(x==p){
        //         return i;
        //     }
        // }
        // return -1;
        
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        vector<int>v(n+1);
        for(int i=1;i<=n;i++){
            v[i]=v[i-1]+nums[i-1];
        }
        for(int i=1;i<=n;i++){
            int lf = v[i-1];
            int rs = sum-v[i];
            if(lf==rs){
                return (i-1);
            }
        }
        return -1;
    }
};