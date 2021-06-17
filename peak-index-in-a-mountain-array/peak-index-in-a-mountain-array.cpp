class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        for(int i=1;i<n-1;i++){
            if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
                return i;
            }
        }
        if(arr[0]>arr[1]){
            return 0;
        }
        else if(arr[n-1]>arr[n-1]){
            return n-1;
        }
        return -1;
    }
};