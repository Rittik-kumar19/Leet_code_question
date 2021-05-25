#define mod 1000000007
class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        int n=arr.size();
        if(k==1){
            return kadane(arr);
        }
        vector<int>arr2(2*n);
        for(int i=0;i<n;i++){
            arr2[i]=arr[i];
            arr2[i+n]=arr[i];
        }
        if(k==2){
            return kadane(arr2)%mod;
        }
        long long int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
        }
        if(sum>0){
            return (kadane(arr2)%mod+((sum%mod)*(k-2))%mod)%mod;
        }
        else{
            return kadane(arr2)%mod;
        }
    }
    int kadane(vector<int>&arr){
         int sum=0;int bestsum=0;
        for(int i=0;i<arr.size();i++){
            sum=max(arr[i],arr[i]+sum);
            bestsum=max(sum,bestsum);
        }
        return bestsum;
    }
};