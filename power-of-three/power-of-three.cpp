class Solution {
public:
    bool isPowerOfThree(int n) {
        double x=n;
        if(n==1){
            return true;
        }
        while(x>0){
            x=x/3;
            if((floor(x)==1) && x-floor(x)==0){
                return true;
            }
        }
        return false;
    }
};