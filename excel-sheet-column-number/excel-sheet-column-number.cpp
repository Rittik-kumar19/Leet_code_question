class Solution {
public:
    int titleToNumber(string s) {
        int len = s.length(), sum=0;
    
    for(int i=0;i<len;i++)
        sum += (int(s[i]-'A'+1))*pow(26,len-1-i);
        //Ye formula yaad rakhna bhai
        //smjh rha na!!
    return sum;
    }
};