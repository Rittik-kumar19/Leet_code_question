class Solution {
public:
    int fib(int n) {
       if(n<=1) {
           return n;
       }
        int sm1=fib(n-1);
        int sm2=fib(n-2);
        int out=sm1+sm2;
        return out;
    }
};