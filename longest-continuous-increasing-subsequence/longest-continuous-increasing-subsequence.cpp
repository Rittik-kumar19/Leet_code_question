class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
         int i=0,n=nums.size(),ans=1;
        while(i<n)
        {
            int cnt=1;
            while(i+1<n && nums[i]<nums[i+1])
            {
                i++;
                cnt++;
            }
            ans=max(ans,cnt);
            i++;
        }
        return ans;   
    }
};