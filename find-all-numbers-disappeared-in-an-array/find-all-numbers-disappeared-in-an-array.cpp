class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        for(int i=1;i<=n;i++){
            if(s.count(i)==0){
                ans.push_back(i);
            }
            else{
                continue;
            }
        }
        return ans;
        
    }
};