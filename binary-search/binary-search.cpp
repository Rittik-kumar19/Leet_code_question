class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        // int mid=st+(end-st)/2;
        while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]>target){
            end=mid-1;
        }
        else if(nums[mid]<target){
            st=mid+1;
        }
        else if(nums[mid]==target){
            return mid;
        }
        }
        return -1;
    }
};