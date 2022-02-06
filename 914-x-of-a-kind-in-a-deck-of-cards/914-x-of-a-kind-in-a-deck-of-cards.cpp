class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()<=1){
            return 0;
        }
        map<int,int>mp;
        for(auto x:deck){
            mp[x]++;
        }
        int x = -1;
        // set<int>st;
        for(auto m:mp){
          if(x==-1){
              x = m.second;
          }
          else{
              x = __gcd(x,m.second);
          } 
        }
        return (x>=2);
    }
};