class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,end=nums.size()-1;
        int mid=0;
        while(st<=end){
            mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[st]<=nums[mid]){//left sorted
                if(target>=nums[st] && target<=nums[mid]){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
            else {
                if(target>=nums[mid] && target<=nums[end]) {
                    st=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};