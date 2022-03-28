class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        auto it=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        
        if(it<nums.size() && nums[it]==target){
            return true;
        }
        else{
            return false;
        }
    }
};