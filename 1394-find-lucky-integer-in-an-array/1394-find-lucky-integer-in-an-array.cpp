class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>mpp;
        for(auto m:arr){
            mpp[m]++;
        }
       
        int mx = -1;
        int ans = arr[0];
        for(auto mm:mpp){
            if(mm.first==mm.second){
                if(mx<mm.first){
                    mx=mm.first;
                }
            }
        }
        return mx;
    }
};