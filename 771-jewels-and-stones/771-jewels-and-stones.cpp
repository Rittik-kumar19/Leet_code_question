class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char,int>mp;
        for(auto ch1:jewels){
            mp[ch1]++;
        }
        int cnt =0;
        for(auto ch:stones){
            if(mp.find(ch)!=mp.end()){
                cnt++;
            }
        }
        return cnt;
    }
};