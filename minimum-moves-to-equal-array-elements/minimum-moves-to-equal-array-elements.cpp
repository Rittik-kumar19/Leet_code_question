class Solution {
public:
     int minMoves(vector<int>& nums) {
        
        int count = 0;
        int minNo = nums[0];
        
        for(int i : nums) minNo = min(minNo, i);
        for(int i : nums) count += i - minNo;
        
        return count;
    }
};