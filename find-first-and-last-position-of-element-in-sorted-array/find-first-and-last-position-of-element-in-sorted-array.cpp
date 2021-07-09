class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int>v(2);
        auto it1 = lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        auto it2 = upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        int x,y;
        if(it1<n && nums[it1]==target){
            x=it1;
            v[0]=x;
        }
        it2--;
        if(it2>=0 && nums[it2]==target){
            y=it2;
            v[1]=y;
            return v;
        }
        else{
            vector<int>vv(2,-1);
            return vv;
        }
        
        
    }
};