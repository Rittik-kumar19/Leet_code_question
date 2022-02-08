class Solution {
public:
    int countSegments(string s) {
        if(s.size()==0){
            return 0;
        }
//            vector<string>v;
//         string sp="";
//         // int p1 = p.size();
//         char ch = s[0];
//         for(int i=1;i<s.size();i++){
//             if(i>0 and s[i-1]==' ' and s[i]==' '){
//                 continue;
//             }
//             else if(i>0 and s[i-1]!=' ' and s[i]==' '){
//                 v.push_back(sp);
//                 sp="";
//                 continue;
//             }
//             sp+=s[i];
//         }
//         if(ch!=' '){
//            v.push_back(sp); 
//         }
//         // cout<<v[v.size()-1]<<endl;
        
//         return v.size();
        
        int count = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]==' ' and s[i-1]!=' '){
                count++;
            }
        }
        return s[s.size()-1]!=' '?count+1:count;
    }
};