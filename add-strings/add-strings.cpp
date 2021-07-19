class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        string ans="";
        while(i>=0||j>=0 || carry!=0){
            int x1=0,x2=0;
            if(i>=0){
               x1=num1[i]-'0';
               i--;
            }
            if(j>=0){
                x2=num2[j]-'0';
                j--;
            }
            // if(i<0){
            //     x1=0;
            // }
            // if(j<0){
            //     x2=0;
            // }
            int sum=x1+x2+carry;
            int p=sum%10;
            ans=to_string(p)+ans;
            carry=sum/10;
        }
        return ans;
    }
};