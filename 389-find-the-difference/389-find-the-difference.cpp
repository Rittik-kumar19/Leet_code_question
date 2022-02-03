class Solution {
public:
    char findTheDifference(string s, string t) {
        int m = t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i =0;
        while(i<m){
            if(s[i]!=t[i]){
                return t[i];
            }
            i++;
        }
        return '-1';
    }
};