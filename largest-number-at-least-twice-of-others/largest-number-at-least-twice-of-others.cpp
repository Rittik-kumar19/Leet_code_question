class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int j=*max_element(nums.begin(),nums.end()); int ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==j) {ans=i; continue;}
            if(nums[i]*2>j) return -1;
        }
        return ans;
    }
};