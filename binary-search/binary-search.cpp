class Solution {
public:
    // int binsearch(vector<int>&nums,int target,int st,int end);
    int search(vector<int>&nums, int target) {
        // int st=0;
        // int end=nums.size()-1;
        // int ans=binsearch(nums,target,st,end);
        // return ans;
        auto lx=lower_bound(nums.begin(),nums.end(),target);
        int xx=lx-nums.begin();
        if(nums[xx]!=target){
            return -1;
        }
        return xx;
    }
    // int binsearch(vector<int>&nums,int target,int st,int end){
    //     if(st<=end){
    //         int mid=st+(end-st)/2;
    //     if(nums[mid]==target){
    //         return mid;
    //     }
    //     else if(nums[mid]>target){
    //         return binsearch(nums,target,st,mid-1);
    //     }
    //     else if(nums[mid]<target){
    //         return binsearch(nums,target,mid+1,end);
    //     }
    //     }
    //     return -1;
    // }
};