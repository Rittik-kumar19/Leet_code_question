class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int>mp;
        for(auto ch:text){
            mp[ch]++;
        }
        if((mp['l']<2)or (mp['o']<2)){
            return 0;
        }
        int p1 = (mp['l']%2==0)?(mp['l']/2):((mp['l']/2));
        
        int p2 = (mp['o']%2==0)?(mp['o']/2):((mp['o']/2));
        int x = min({mp['b'],mp['a'],p1,p2,mp['n']});
        return x;
    }
};