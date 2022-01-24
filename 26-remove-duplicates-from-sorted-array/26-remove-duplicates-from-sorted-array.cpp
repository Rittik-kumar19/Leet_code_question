class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        auto lp = unique(nums.begin(),nums.end());
        int d = distance(nums.begin(),lp);
        return d;
    }
};