
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>vnew;
        for(auto cc:nums){
            mp[cc]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        for(auto x:mp){
            minh.push({x.second,x.first});
            if(minh.size()>k){
                minh.pop();
            }
        }
        while(k>0){
            vnew.push_back(minh.top().second);
            minh.pop();
            k--;
        }
        sort(vnew.begin(),vnew.end());
        return vnew;
    }
};