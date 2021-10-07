class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergeinterval;
        sort(intervals.begin(),intervals.end());
        vector<int>tempinterval=intervals[0];
        for(auto x:intervals){
            if(x[0]<=tempinterval[1]){
                tempinterval[1]=max(x[1],tempinterval[1]);
            }
            else{
                mergeinterval.push_back(tempinterval);
                tempinterval=x;
            }
        }
        mergeinterval.push_back(tempinterval);
        return mergeinterval;
    }
};