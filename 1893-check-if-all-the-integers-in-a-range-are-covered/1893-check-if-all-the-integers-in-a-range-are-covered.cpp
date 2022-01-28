// class Solution {
// public:
//     bool isCovered(vector<vector<int>>& ranges, int left, int right) {
//         map<int,bool>mp;
//         for(int i=left;i<=right;i++){
//             mp[i]=false;
//         }
        
//         for(int i=0;i<ranges.size();i++){
//             for(int j=ranges[i][0];j<=ranges[i][1];j++){
//                 if(mp.find(j)!=mp.end()){
//                     mp[j]=true;
//                 }
//             }
//         }
//         for(auto m:mp){
//             if(m.second==false){
//                 return false;
//             }
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        set<int>s;
        for(int j=0;j<ranges.size();j++){
            vector<int>vnew=ranges[j];
            for(int i=ranges[j][0];i<=ranges[j][1];i++){
                s.insert(i);
            }
        }
        for(int k=left;k<=right;k++){
            if(s.count(k)==0){
                return false;
            }
        }
        return true;
        
    }
};