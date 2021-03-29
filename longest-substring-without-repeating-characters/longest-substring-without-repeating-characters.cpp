class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0){
            return 0;
        }
       int i=0;int j=0;
        int mx=-1;
        unordered_map<int,int>ump;
        ump.clear();
        while(j<s.size()){
            ump[s[j]]++;
            if(ump.size()>(j-i+1)){
                j++;
            }
            else if(ump.size()==(j-i+1)){
                mx=max(mx,j-i+1);
                j++;
            }
            else if(ump.size()<(j-i+1)){
                while(ump.size()<(j-i+1)){
                    ump[s[i]]--;
                    if(ump[s[i]]==0){
                        ump.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return mx; 
    }
};