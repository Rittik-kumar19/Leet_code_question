class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>s;
        for(auto v:nums){
            if(s.count(v)){
                return true;
            }
            s.insert(v);
        }
        return false;
    }
};