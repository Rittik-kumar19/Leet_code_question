class Solution {
public:
    int strStr(string haystack, string needle) {
        int ln=needle.length();
        int lh=haystack.length();
        for(int i=0;i<=lh-ln;i++){
            if(haystack.substr(i,ln)==needle){
                return i;
            }
            else{
                continue;
            }
        }
        return -1;
    }
};