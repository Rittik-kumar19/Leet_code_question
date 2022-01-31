class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int mn=INT_MAX;
        for(int i=0;i<n-1;i++){
            mn=min(mn,abs(nums[i+1]-nums[i]));
        }
        cout<<mn<<endl;
        for(int i=0;i<n-1;i++){
            if(abs(nums[i+1]-nums[i])==mn){
                ans.push_back({nums[i],nums[i+1]});
            }
        }
        return ans;
    }
};