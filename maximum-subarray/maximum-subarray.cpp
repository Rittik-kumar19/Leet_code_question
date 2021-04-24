class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int mx=nums[0];
        int sum=0;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
              sum=sum+nums[j];
                mx=max(sum,mx);
            }
        }
      
        return mx;
        // int n=nums.size();
        // int sum=0;
        // int best=nums[0];
        // for(int i=0;i<n;i++){
        //     sum=max(sum+nums[i],nums[i]);
        //     best=max(sum,best);
        // }
        // return best;
}
};