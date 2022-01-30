class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>odd;
        vector<int>even;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(even.size()>=1){
                    int x=even.back();
                    even.pop_back();
                    ans.push_back(x);
                }
            }
            else if((i%2)==1){
                if(odd.size()>=1){
                    int y=odd.back();
                    odd.pop_back();
                    ans.push_back(y);
                }
            }
        }
        return ans;
    }
};