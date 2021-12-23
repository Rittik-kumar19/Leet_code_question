class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        if(arr.size()==1){
            return 0;
        }
        int low = 0;
        int high = arr.size()-1;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(mid>0 && mid<arr.size()-1){
                if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1])
                  return mid;
                if(arr[mid-1]<arr[mid] && arr[mid]<arr[mid+1])
                  low = mid+1;
                else
                  high=mid-1;
            }
            else if(mid==0){
                if(arr[0]>arr[1]){
                    return 0;
                }
                else {
                    return 1;
                }
            }
            else if(mid == arr.size()-1){
                if(arr[arr.size()-1]>arr[arr.size()-2]){
                    return arr.size()-1;
                }
                else {
                    return arr.size()-2;
                }
            }
        }
        return -1;
    }
};