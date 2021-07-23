class Solution {
public:
    int calculate(string s) {
       int result=0;
       int sign=1;
       int j=0;
        int len=s.length();
        stack<int>st;
        while(j<len){
            if(s[j]=='+'){
                sign=1;
            }
            else if(s[j]=='-'){
                sign=-1;
            }
            else if(isdigit(s[j])){
               int num=s[j]-'0';
                while(j+1<len and isdigit(s[j+1])){
                    num=num*10+(s[j+1]-'0');
                    j++;
                }
                result+=num*sign;
            }
            else if(s[j]=='('){
                st.push(result);
                st.push(sign);
                result=0;
                sign=1;
            }
            else if(s[j]==')'){
                int xsign=st.top();
                st.pop();
                int xresult=st.top();
                st.pop();
                result=result*xsign+xresult;
            }
            j++;
        }
        return result;
    }
};