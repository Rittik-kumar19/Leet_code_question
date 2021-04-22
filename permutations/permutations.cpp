class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>vnew;
        sort(nums.begin(),nums.end());
        while(1){
            vnew.push_back(nums);
            if(!std::next_permutation(nums.begin(),nums.end())){
                break;
            }
        }
        return vnew;
    }
};