class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
      sort(nums.begin(),nums.end(),greater<int>());
        int n = nums.size();
        int ans = 0;
      for(int i = 0;i<n-2;i++){
         int j=i+1;
         int k=i+2;
           if(((nums[i]+nums[j])>nums[k]) and ((nums[j]+nums[k])>nums[i]) and ((nums[i]+nums[k])>nums[j])){
                      ans=max(ans,(nums[i]+nums[j]+nums[k]));
                      break;
                  }
      }
    return ans;
    }
};