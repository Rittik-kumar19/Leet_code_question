class Solution {
public:
    bool wordPattern(string p, string s) {
        vector<string>v;
        string sp="";
        int p1 = p.size();
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                v.push_back(sp);
                sp="";
                continue;
            }
            sp+=s[i];
        }
        v.push_back(sp);
        if(p.size()!=v.size()){
            return false;
        }
        // unordered_map<char,string>mp;
        // unordered_map<string,char>mpp;
        // for(int i = 0;i<p.size();i++){
        //     mp[p[i]]=st[i];
        // }
        // for(int i=0;i<st.size();i++){
        //     mpp[st[i]]=s[i];
        // }
        // string res = "";
        // for(int i=0;i<st.size();i++){
        //     res=res+mpp[st[i]];
        // }
        // vector<string>stt;
        // for(int i=0;i<p.size();i++){
        //     stt.push_back(mp[p[i]]);
        // }
        // cout<<res<<endl;
        // // cout<
        // if(res==p and stt==st){
        //     return true;
        // }
        // return false;
        map<char,string>mp;
        set<string>ch;
        for(int i=0;i<p.size();i++){
            if(mp.count(p[i])==0 and ch.count(v[i])==0){
                mp[p[i]]=v[i];
                ch.insert(v[i]);
            }
            else if(mp.count(p[i])==0 and ch.count(v[i])!=0){
                return false;
            }
            else if(mp[p[i]]!=v[i]){
                return false;
            }
        }
        return true;
        
        
        
        
        
        
//         map<char,int>mp1;
//         map<string,int>mp2;
//         for(auto ch1:pattern){
//             mp1[ch1]++;
//         }
//         for(auto ch2:st){
//             mp2[ch2]++;
//         }
        
//         if(mp1.size()==mp2.size()){
//             auto itr1 = mp1.begin();
//             auto itr2 = mp2.begin();
//             while(itr1!=mp1.end() and itr2!=mp2.end()){
//                 if(itr1->second!=itr2->second){
//                     return false;
//                 }
//                 itr1++;
//                 itr2++;
//             }
//             return true;
//         }
//         return false;
        
        
    }
};