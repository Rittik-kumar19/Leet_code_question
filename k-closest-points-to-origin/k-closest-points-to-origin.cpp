class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector< vector<int> >vnew;
        // vector<int>vv;
        // map<pair<int,int>,int>mp;
        priority_queue<pair<int,pair<int,int> > >maxh;
        for(int i=0;i<points.size();i++){
            maxh.push({points[i][0]*points[i][0]+points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            if(maxh.size()>k){
                maxh.pop();
            }
        }
        while(k>0){
            vector<int>v;
            // v.push_back(maxh.top().second.first);
            // v.push_back(maxh.top().second.second);
            // vnew.push_back(v);
            pair<int,int>p=maxh.top().second;
            v.push_back(p.first);
            v.push_back(p.second);
            vnew.push_back(v);
            maxh.pop();
            k--;
        }
        return vnew;
    }
};