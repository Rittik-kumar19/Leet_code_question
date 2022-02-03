class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int n = nums.size();
        int mx = 0;
        int mask = 0;
        set<int>se;
        for(int bit = 30;bit>=0;--bit){
            mask |= (1<<bit);
            //11001
            for(int i=0;i<nums.size();i++){
                //Jo uske 2 k power mein aa rha wahi le rhe hai
                se.insert(nums[i]&mask);
                //10000
               // 11001
            //    10000
            }
            int newMax = mx|(1<<bit);
            // 10000
            
            // 10000
            // 01000
            // 11000
            
            // 11000
            // 00100
            // 11100
            
//             11100
//             00010
//             11110
            
            for(auto prefix:se){
                //10000
            //    10000
                  // 00000
                
                // 1000
                // 1000
                // 1000
                
                // 100
                // 100
                // 000
                    
                if(se.count(newMax^prefix)){
                    mx = newMax;
                    
                    // mx = 16
                    // mx =24
                    // mx=28
                    break;
                }
            }
            se.clear();
        }
        
        
        return mx;
        
    }
};