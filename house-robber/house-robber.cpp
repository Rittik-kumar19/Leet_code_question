class Solution {
public:
    int rob(vector<int>& arr) {
        int n=arr.size();
        int inc=arr[0];
        int exc=0;
        int ninc=arr[0];
        int nexc=0;
        for(int i=1;i<n;i++){
            ninc=nexc+arr[i];
            nexc=max(inc,exc);
            inc=ninc;
            exc=nexc;
        }
        int ans=max(inc,exc);
        return ans;
    }
};