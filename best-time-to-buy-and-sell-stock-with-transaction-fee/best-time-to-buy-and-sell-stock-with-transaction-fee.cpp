class Solution {
public:
    int maxProfit(vector<int>& arr, int fee) {
        int n=arr.size();
        int obsp=0-arr[0];
        int ossp=0;
        int nbsp=0;
        int nssp=0;
        for(int i=1;i<n;i++){
            if(ossp-arr[i]>obsp){
                nbsp=ossp-arr[i];
            }
            else{
                nbsp=obsp;
            }
            if(obsp+arr[i]-fee>ossp){
                nssp=obsp+arr[i]-fee;
            }
            else{
                nssp=ossp;
            }
            obsp=nbsp;
            ossp=nssp;
        }
        return ossp;
    }
};