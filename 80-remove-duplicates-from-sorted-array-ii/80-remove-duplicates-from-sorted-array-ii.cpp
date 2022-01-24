class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        for(auto mm:nums){
            mp[mm]++;
        }
        int cnt=0;
        vector<int>v;
        for(auto m:mp){
           if(m.second>1){
               v.push_back(m.first);
               v.push_back(m.first);
               cnt+=2;
           }
            else if(m.second==1){
                v.push_back(m.first);
                cnt+=1;
            }
        }
        nums=v;
        return cnt;
    }
};