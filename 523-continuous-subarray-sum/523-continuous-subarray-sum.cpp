class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        if(n<2){
            return false;
        }
        int sum = 0;
        int rem = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            rem=sum%k;
            if(rem==0 and i>0){
                return true;
            }
            if(mp.find(rem)!=mp.end()){
                if(i-mp[rem]>1){
                    return true;
                }
            }
            else{
                mp[rem]=i;
            }
        }
        return false;
    }
};