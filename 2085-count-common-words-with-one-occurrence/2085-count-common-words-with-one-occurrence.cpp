class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>mp1;
        unordered_map<string,int>mp2;
        for(auto word:words1){
            mp1[word]++;
        }
        for(auto wordd:words2){
            mp2[wordd]++;
        }
        vector<string>vnew;
        for(auto m:mp1){
            if(m.second==1){
                vnew.push_back(m.first);
            }
        }
        int cnt = 0;
        for(auto v:vnew){
            if(mp2.find(v)!=mp2.end()){
                if(mp2[v]==1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};