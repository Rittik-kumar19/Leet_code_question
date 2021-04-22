class Solution {
public:
    int reverse(int x) {
        int flag=0;
        if(x<0){
            flag=1;
        }
        long long int ans=0;
        int xx=abs(x);
        int n=xx;
        while(n){
            int rem=n%10;
            ans=ans*10+rem;
            n=n/10;
        }
        if(ans>INT_MAX || ans<INT_MIN){
            return 0;
        }
        else{
            if(flag){
            return (-1*ans);
           }
            return ans;
        }
        
    }
};