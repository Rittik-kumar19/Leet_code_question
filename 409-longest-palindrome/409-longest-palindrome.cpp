class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>mp;
        for(auto ch:s){
            mp[ch]++;
        }
        vector<int>ans;
        for(auto m:mp){
            ans.push_back(m.second);
        }
        sort(ans.begin(),ans.end(),greater<int>());
        int cnt = 0;
        for(int i=0;i<ans.size();i++){
            if(ans[i]%2==0){
                cnt+=ans[i];
            }
        }
        bool flag = false;
        for(int i=0;i<ans.size();i++){
            if(ans[i]%2==1){
                cnt+=(ans[i]-1);
                flag = true;
                // break;
            }
        }
        if(flag){
          cnt=cnt+1;
        }
        return cnt;
    }
};