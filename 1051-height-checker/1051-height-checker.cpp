class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int>neww=heights;
        sort(neww.begin(),neww.end());
        int cnt=0;
        for(int i=0;i<n;i++){
            if(heights[i]!=neww[i]){
                cnt++;
            }
        }
        
        return cnt;
        
    }
};