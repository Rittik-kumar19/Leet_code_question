//1.BFA

// class Solution {
// public:
//     int longestOnes(vector<int>& nums, int k) {
//         int n = nums.size();
//         // int cnt =0
//         int x,y;
//         int ans = INT_MIN;
//         for(int i=0;i<n;i++){
//             int cnt =0;int kk=k;
//             for(int j=i;j<n;j++){
//                 if(nums[j]==0){
//                     if(kk==0){
//                         // cnt = (j-1)+1;
//                         // y=j,x=i;
//                         // break;
//                         cnt = (j-1-i)+1;
//                         break;
//                     }
//                     else if(kk>0){
//                         kk--;
//                         cnt = (j-i)+1;
//                         // y=j,x=i;
//                     }
//                 }
//                 if(nums[j]==1 and k==0){
//                     cnt=(j-i)+1;
//                 }
//                 else if(nums[j]==1 and k!=0){
//                     cnt = (j-i)+1;
//                 }
//             }
//             ans = max(ans,cnt);
//         }
//         // cout<<y<<" "<<x<<endl;
//         return ans;
//     }
// };

// Two Pointer


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
      int n = nums.size();
      int i=0,j=0;
      int b = k;
      int ans = 0;
      while(j<n){
          if(nums[j]==1){
              ans = max(ans,((j-i)+1));
              j++;
          }
          else if(nums[j]==0){
              if(b>0){
                  b--;
                  ans = max(ans,((j-i)+1));
                  j++;
              }
              else if(b==0){
                  bool flag = true;
                  while(flag){
                      if(nums[i]==0){
                          flag=false;
                      }
                      i++;
                  }
                  // i++;
                  ans = max(ans,((j-i)+1));
                  j++;
                  // else if(nums[j]==1){
                  //     j++;
                  //     ans = max(ans,((j-i)+1));
                  // }
              }
          }
      }
     return ans;
    }
};