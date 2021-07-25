class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        
        int s = nums.size();
        
        for(int i=0;i<s;i++)
            mp[nums[i]] = i;
        
      
        int res = 0;
        
        set<pair<int,int>> st;
        
        for(int i=0;i<s;i++) {
            int d = nums[i]-k;
            
            if(mp.find(d)!=mp.end()  && i!=mp[d])
                st.insert({nums[i],d});
                
        }
        
        return st.size();
    }
};