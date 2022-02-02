class Solution {
public:
    static int solve(int x){
        int p = 0;
        for(int i=x-1;i>=1;i--){
            p+=i;
        }
        return p;
    }
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
      int n = dominoes.size();
        int cnt =0;
      map<vector<int>,int>mpp;
      for(int i=0;i<n;i++){
          sort(dominoes[i].begin(),dominoes[i].end());
          vector<int>x=dominoes[i];
          mpp[x]++;
      }
      for(auto m:mpp){
          if(m.second>=2){
              cnt+=solve(m.second);
          }
      }
      return cnt;
    }
};