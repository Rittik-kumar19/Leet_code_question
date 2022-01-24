class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z0=0,z1=0,z2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                z0++;
            }
            else if(nums[i]==1){
                z1++;
            }
            else if(nums[i]==2){
                z2++;
            }
        }
        int p=0;
        while(p<nums.size()){
            if(z0>0){
                while(z0>0){
                    nums[p]=0;
                    z0--;
                    p++;
                }
            }
            else if(z1>0){
                while(z1>0){
                    nums[p]=1;
                    z1--;
                    p++;
                }
            }
            else if(z2>0){
                while(z2>0){
                    nums[p]=2;
                    z2--;
                    p++;
                }
            }
        }
    }
};