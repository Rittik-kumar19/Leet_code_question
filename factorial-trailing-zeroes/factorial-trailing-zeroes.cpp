class Solution {
public:
    int trailingZeroes(int n) {
        long long int ans=0;
        int x=n;
        int j=1;
        while(x){
            x=n;
            ans=ans+(x/pow(5,j));
            x=x/pow(5,j);
            j++;
        }
        return ans;
    }
};