class Solution {
public:
    bool checkIfExist(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int x = nums[i]*2;
            int ans1 = binary_search(nums.begin()+i+1,nums.end(),x);
            int ans2 = binary_search(nums.begin(),nums.begin()+i,x);
            if((ans1 or ans2)){
                return true;
            }
        }
        return false;
    }
};