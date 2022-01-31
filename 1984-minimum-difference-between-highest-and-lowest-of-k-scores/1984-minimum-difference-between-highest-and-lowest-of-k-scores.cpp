class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
      int n = nums.size();
      if(k==1){
          return 0;
      }
      sort(nums.begin(),nums.end(),greater<int>());
      int mn = INT_MAX;
      for(int i=0;i<=n-k;i++){
          int x = nums[i];
          int y = nums[i+(k-1)];
          mn = min(mn,abs(x-y));
      }
      return mn;
      
    }
};