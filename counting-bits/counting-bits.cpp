class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        // int cnt=0;
        for(int i=0;i<=n;i++){
            int x=bitson(i);
            ans.push_back(x);
        }
        return ans;
    }
    int bitson(int x){
        int cnt=0;
        while(x!=0){
            int rsbm=(x&(-x));
            x=x-rsbm;
            cnt++;
        }
        return cnt;
    }
};