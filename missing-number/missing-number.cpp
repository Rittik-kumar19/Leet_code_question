#define ll long long
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        int *arr=new int[n+1];
        for(int i=0;i<n+1;i++){
            arr[i]=0;
        }
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<n+1;i++){
            if(arr[i]==0){
                c=i;
                break;
            }
        }
        return c;
        //                *******------------------------***********
        // ll s=0;
        // ll b=0;
        // for(int i=0;i<=n;i++){
        //     s=s+i;
        //     b=b+pow(i,2);
        // }
        // ll s1=0;
        // ll b1=0;
        // for(int i=0;i<n;i++){
        //     s1=s1+nums[i];
        //     b1=b1+pow(nums[i],2);
        // }
        // ll rs1=s-s1;
        // ll bs1=b-b1;
        // ll rs2=0;
        // if(rs1!=0){
        //     rs2=bs1/rs1;
        // }
        // int x=(rs1+rs2)/2;
        // return rs2;
        //           *******************------------------------************************
        // int x=0;
        // for(int i=0;i<n;i++){
        //     x=x^nums[i];
        // }
        // int y=0;
        // for(int i=0;i<=n;i++){
        //    y=y^i; 
        // }
        // int rs=x^y;
        // vector<int>v1;
        // vector<int>v2;
        // for(int i=0;i<n;i++){
        //     if(rs^nums[i]){
        //         v1.push_back(nums[i]);
        //     }
        //     else{
        //         v2.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<=n;i++){
        //     if(rs^i){
        //         v1.push_back(i);
        //     }
        //     else{
        //         v2.push_back(i);
        //     }
        // }
        // int s1=v1.size();
        // int s2=v2.size();
        // int s=0;
        // for(int i=0;i<s1;i++){
        //     s=s^v1[i];
        // }
        // int ss=0;
        // for(int i=0;i<s2;i++){
        //     ss=ss^v2[i];
        // }
        // int j=0;
        // for(j=0;j<n;j++){
        //     if(s==nums[j]){
        //         break;
        //     }
        // }
        // if(j==n){
        //     return s;
        // }
        // else{
        //     return ss;
        // }
    }
};