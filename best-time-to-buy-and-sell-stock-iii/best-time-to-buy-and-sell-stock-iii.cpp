class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int mpist=0;
        int leastsf=arr[0];
        int *dpl=new int [n];
        for(int i=0;i<n;i++){
            dpl[i]=0;
        }
        for(int i=1;i<n;i++){
            if(arr[i]<leastsf){
                leastsf=arr[i];
            }
            mpist=arr[i]-leastsf;
            if(mpist>dpl[i-1]){
                dpl[i]=mpist;
            }
            else{
                dpl[i]=dpl[i-1];
            }
        }
        int mpibt=0;
        int maxat=arr[n-1];
        int *dpr=new int [n];
        for(int i=0;i<n;i++){
            dpr[i]=0;
        }
        for(int i=n-2;i>=0;i--){
            if(arr[i]>maxat){
                maxat=arr[i];
            }
            mpibt=maxat-arr[i];
            if(mpibt>dpr[i+1]){
                dpr[i]=mpibt;
            }
            else{
                dpr[i]=dpr[i+1];
            }
        }
        int op=0;
        for(int i=0;i<n;i++){
            if(dpl[i]+dpr[i]>op){
                op=dpl[i]+dpr[i];
            }
        }
        return op;
    }
};