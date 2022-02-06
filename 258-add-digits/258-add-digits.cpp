class Solution {
public:
    int addDigits(int num) {
        int x = num;
         while(1){
             // int x =num;
             int sum = 0;
             while(x!=0){
                 sum+=(x%10);
                 x=x/10;
             }
             if(sum>9){
                 x=sum;
             }
             else if(sum<=9){
                 x=sum;
                 break;
             }
         }
        return x;
    }
};