class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        
        if(n1>n2){
            return false;
        }
        
        unordered_map<char,int>mp;
        for(int i=0;i<s1.size();i++){
            mp[s1[i]]++;
        }
        int i=0,j=0;
        int cnt = mp.size();
        int k=s1.length();
        while(j<n2){
            if(mp.find(s2[j])!=mp.end()){
                mp[s2[j]]--;
                if(mp[s2[j]]==0){
                    cnt--;
                }
            }
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(cnt == 0){
                    return true;
                }
                
                 if(mp.find(s2[i])!=mp.end()){
                mp[s2[i]]++;
                if(mp[s2[i]]==1){
                    cnt++;
                }
            }
            i++,j++;
            }
        }
        return false;
    }
};