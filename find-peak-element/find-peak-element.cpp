class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size(), l = 0, r = n - 1;
        while (l < r) {
            int m = (l + r) / 2, mr = m + 1;
            if (nums[m] < nums[mr]) {
                l = mr;
            } else {
                r = m;
            }
        }
        return l;
    }
};