class Solution {
public:
    bool ok(int mid,vector<int>& weights,int D){
        int n = weights.size();
        int days=1;
        int total =0;
        bool isvalid = true;
        for(int i=0;i<n;i++){
            if(weights[i]>mid){
                isvalid=false;
            }
            if(total+weights[i]<=mid){
                total+=weights[i];
            }
            else{
                days++;
                total=weights[i];
            }
        }
        if(!isvalid){
            return false;
        }
        else{
            return (days<=D);
        }
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=1,r=50000*500;
        while(l<r){
            int mid=l+(r-l)/2;
            if(ok(mid,weights,days)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};