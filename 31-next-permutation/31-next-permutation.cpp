class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        // vector<int>vnew=nums;
        // next_permutation(vnew.begin(),vnew.end());
        // for(int x:vnew){
        //     cout<<x<<",";
        // }
        int n=nums.size();
        int k=0,l=0;
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1]){
                break;
            }
        }
        if(k<0){
            reverse(nums.begin(),nums.end());
        }
        else{
            for(l=n-1;l>k;l--){
                if(nums[l]>nums[k]){
                    break;
                }
            }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
        }
    }
};