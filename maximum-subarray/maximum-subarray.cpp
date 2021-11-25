class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int x=nums[0];
        int y=nums[0];
        for(int i=1;i<nums.size();i++){
            x=max(nums[i],nums[i]+x);
            y=max(y,x);
        }
        return y;
    }
};