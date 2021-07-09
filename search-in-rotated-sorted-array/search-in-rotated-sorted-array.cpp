class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0,h = n-1;
        // First find the index of lowest element
        while(l<h){
            int m = l + (h-l)/2;
            if(nums[m]>nums[h]) l = m+1;
            else h = m; 
        }
        int r = l; // store it in r
        
        if(target==nums[r]) return r;
        else if(r==0) l=0,h=n-1;
        else if(target>=nums[0]) l=0,h = r;
        else if(target<nums[0]) l = r,h=n-1;
        
        //Simple Binary Search
        while(l<=h){
            int m = l + (h-l)/2;
            if(nums[m]==target) return m;
            if(nums[m]>target) h = m -1;
            else l = m+1;
        }
        return -1;
    }
};