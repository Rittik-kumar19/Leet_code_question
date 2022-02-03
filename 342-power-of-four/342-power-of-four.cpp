class Solution {
public:
    bool isPowerOfFour(int n) {
         if((n>(1ll<<31)) or (n<=(-2147483648))){
            return false;
        }
       if(n==0){
           return false;
       }
        if(n==1){
            return true;
        }
        if(((n&(n-1)))==0){
            int p = __builtin_ctz(n);
            if(p%2==0){
                return true;
                // break;
            }
            else{
                return false;
            }
        }
        return false;
    }
};