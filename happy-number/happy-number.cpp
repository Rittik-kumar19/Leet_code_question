class Solution {
public:
    bool isHappy(int n) {
        int x=n;
        while(1){
            if(x==1 || x==7){
                return true;
            }
            else if(x==2 || x==3 || x==4 || x==5 || x==6 || x==8 ||x==9){
                return false;
            }
            else{
                int sum=0;
                while(x){
                    int rem=x%10;
                    sum=sum+pow(rem,2);
                    x=x/10;
                }
                x=sum;
            }
        }
    }
};