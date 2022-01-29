// class Solution {
// public:
//     int countElements(vector<int>& nums) {
//         int n = nums.size();
//         if(n<=2){
//             return 0;
//         }
//         sort(nums.begin(),nums.end());
//         int x = 0;
//         int i =0;
//         while((i<n-1) and (nums[i]==nums[i+1])){
//             i++;
//         }
//         if(i==n-1){
//             return 0;
//         }
//         x=i+1;
//         int j =n-1;
//         int y = 0;
//         while((j>0)and (nums[j]==nums[j-1])){
//             j--;
//         }
//         y=j-1;
//         int ans  =  (y-x)+1;
//         return ans;
//     }
// };


class Solution {
public:
    int countElements(vector<int>& nums) {
      int n = nums.size();
      sort(nums.begin(),nums.end());
      int mini = nums[0];
      int maxi = nums[n-1];
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]>mini)and(nums[i]<maxi)){
                count++;
            }
        }
        return  count;
    }
};