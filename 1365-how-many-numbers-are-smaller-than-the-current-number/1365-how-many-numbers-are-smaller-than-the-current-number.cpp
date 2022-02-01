class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>nums1=nums;
        sort(nums1.begin(),nums1.end());
        vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            int x = lower_bound(nums1.begin(),nums1.end(),nums[i])-nums1.begin();
            ans.push_back(x);
        }
        return ans;
    }
};