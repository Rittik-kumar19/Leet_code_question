class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
       for(int i=0;i<nums.size();i++){
           minh.push({nums[i],i});
           if(minh.size()>k){
               minh.pop();
           }
       }
      // vector<int>ans(minh.begin(),minh.end());
      vector<pair<int,int>>ans;
      while(minh.size()>0){
          auto it = minh.top();
          ans.push_back({it.second,it.first});
          // ans.push_back(x);
          minh.pop();
      }
      // return ans;
      sort(ans.begin(),ans.end());
      vector<int>res;
      for(auto ii:ans){
          res.push_back(ii.second);
      }
        return res;
        
    }
};