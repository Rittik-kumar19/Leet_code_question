class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==0 || n==1){
            return;
        }
        int cnt=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==0){
                cnt++;
            }
        }
        // int x=0,y=0;
        for(int x=0;x<cnt;x++){
              for(int i=0;i<n-1;i++){
              if(nums[i]==0 && nums[i+1]!=0){
                  swap(nums[i],nums[i+1]);
              }
              else if(nums[i]==0 && nums[i+1]==0){
                  swap(nums[i],nums[i+1]);
              }
              else{
                  continue;
              }
          }

        }
    }
};