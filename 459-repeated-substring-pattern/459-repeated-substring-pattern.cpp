class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str1 = s+s;
        string str2 = str1.substr(1,2*s.size()-2);
        if(str2.find(s)!=-1){
            return true;
        }
        return false;
    }
};