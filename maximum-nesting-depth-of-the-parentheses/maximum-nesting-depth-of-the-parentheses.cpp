class Solution {
public:
    int maxDepth(string s) {
        int a = int(s.length());
        int result = 0,max = 0;
        for(int i = 0;i < a;i++){
            if(s[i] == '('){
                result += 1;
            } else if(s[i] == ')'){
                result -= 1;
            }
            if(result > max){
                max = result;
            }
        }
        return max;
    }
};
