class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>vnew=nums;
        vnew.insert(vnew.end(),nums.begin(),nums.end());
        return vnew;
        
    }
};