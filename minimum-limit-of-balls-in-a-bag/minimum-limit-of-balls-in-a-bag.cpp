class Solution {
public:
    bool check(int m,vector<int>& nums,int op){
        for(int i=0;i<nums.size();i++){
            op-=(nums[i]/m);
            if(nums[i]%m==0){
                op++;
            }
        }
        return op>=0;
    }
    int minimumSize(vector<int>& nums, int op) {
        int st=1,end=INT_MAX;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(check(mid,nums,op)){
                ans=mid;
                end=mid-1;
            }
            else {
                st=mid+1;
            }
        }
        return ans;
    }
};