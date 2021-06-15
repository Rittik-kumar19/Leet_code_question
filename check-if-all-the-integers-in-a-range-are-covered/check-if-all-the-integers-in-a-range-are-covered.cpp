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