class Solution {
public:
    int mySqrt(int x) {
        long long int l=0,h=x,mid=0,ans=0;
        while(l<=h){
            mid=(l+(h-l)/2);
            if(mid*mid==x){
                return mid;
            }
            else if(mid*mid<x){
                ans=mid;
                l=mid+1;
            }
            else if(mid*mid>x){
                h=mid-1;
            }
        }
        return ans;
    }
};