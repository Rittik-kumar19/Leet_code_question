class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        int mask = 0;
        set<int>se;
        for(int bit = 30;bit>=0;--bit){
            mask |= (1<<bit);
            for(int i=0;i<nums.size();i++){
                //Jo uske 2 k power mein aa rha wahi le rhe hai
                se.insert(nums[i]&mask);
            }
            int newMax = mx|(1<<bit);
            
            for(auto prefix:se){
                if(se.count(newMax^prefix)){
                    mx = newMax;
                    break;
                }
            }
            se.clear();
        }
        
        
        return mx;
        
    }
};