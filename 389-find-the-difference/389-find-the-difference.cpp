class Solution {
public:
    char findTheDifference(string s, string t) {
        // int m = t.size();
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // int i =0;
        // while(i<m){
        //     if(s[i]!=t[i]){
        //         return t[i];
        //     }
        //     i++;
        // }
        // return '-1';
        map<char,int>mp;
        for(auto ch1:s){
            mp[ch1]++;
        }
        for(auto ch2:t){
            mp[ch2]++;
        }
        for(auto m:mp){
            if(m.second%2!=0){
                return m.first;
            }
        }
        return '-1';
    }
};