class Solution {
public:
    int addDigits(int num) {
        int ans = 0;
        if(num>=0 and num<=9){
            return num;
        }
        if(num%9==0){
            return 9;
        }
        return num%9;
    }
};