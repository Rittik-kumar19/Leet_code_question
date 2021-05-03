class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        auto it = find(nums.begin(), nums.end(), max);
        int index = it - nums.begin();
        return index;
    }
};