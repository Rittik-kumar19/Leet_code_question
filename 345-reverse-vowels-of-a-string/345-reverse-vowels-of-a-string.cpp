class Solution {
public:
    bool isvowel(char ch){
        bool lw = (ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u' );
        bool up = (ch=='A' or ch=='E' or ch=='I' or ch=='O' or ch=='U');
        if(lw or up){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
       // vector<char>vo;
       //  for(int i=0;i<s.size();i++){
       //      if(isvowel(s[i])){
       //          vo.push_back(s[i]);
       //      }
       //  }
       //  reverse(vo.begin(),vo.end());
       //  int j=0;
       //  string res = "";
       //  for(int i=0;i<s.size();i++){
       //      if(isvowel(s[i])){
       //          res=res+vo[j];
       //          j++;
       //          continue;
       //      }
       //      res+=s[i];
       //  }
       //  return res;
        int l = 0;
        int r = s.size()-1;
        while(l<r){
            if(isvowel(s[l]) and isvowel(s[r])){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            else if(isvowel(s[l])==false){
                l++;
            }
            else if(isvowel(s[r])==false){
                r--;
            }
        }
        return s;
    }
};