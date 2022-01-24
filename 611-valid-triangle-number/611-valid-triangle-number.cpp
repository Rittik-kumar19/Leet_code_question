class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        
        //BFA nhi chala
        // sort(nums.begin(),nums.end());
        // int cnt = 0;
        // int n = nums.size();
        // for(int i=0;i<n-2;i++){
        //     for(int j=i+1;j<n-1;j++){
        //         for(int k=j+1;k<n;k++){
        //            if((nums[i]+nums[j]>nums[k])or(nums[j]+nums[k]>nums[i])or(nums[k]+nums[i]>nums[j])){
        //                     cnt++;
        //             }
        //         }
        //     }
        // }
        // return cnt;
        
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                auto it = lower_bound(nums.begin()+j+1,nums.end(),nums[i]+nums[j])-nums.begin()-1;
                cnt += (it-j);
            }
        }
        return cnt;
    }
};