class Solution {
public:
    int canBeTypedWords(string text, string brok) {
        vector<string>vstr;
        string s = "";
        int i = 0;
        for(i=0;i<text.size();i++){
            if(text[i]==' '){
               vstr.push_back(s); 
               s="";
               continue;
            }
            s=s+text[i];
        }
        if(i==text.size()){
            vstr.push_back(s);
        }
        for(auto pp:vstr){
            cout<<pp<<" ";
        }
        cout<<endl;
        map<char,int>mp;
        for(auto br:brok){
            mp[br]++;
        }
        int cnt = 0;
        for(auto vt:vstr){
            auto x = vt;
            // cout<<x<<" ";
            int k = 0;
            for(k=0;k<x.size();k++){
                if(mp.find(x[k])!=mp.end()){
                    break;
                }
            }
            if(k==x.size()){
                cnt+=1;
            }
        }
        return cnt;
    }
};