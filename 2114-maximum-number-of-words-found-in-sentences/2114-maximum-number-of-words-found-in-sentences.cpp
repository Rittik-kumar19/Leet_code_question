class Solution {
public:
    int mostWordsFound(vector<string>& sen) {
        int mx = 0;
        for(auto st:sen){
            string s=st;
            int cnt = 0;
            for(auto ch:s){
                if(ch==' '){
                    cnt++;
                }
            }
            mx = max(mx,cnt);
        }
        return mx+1;
    }
};