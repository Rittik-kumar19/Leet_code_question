class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int res=0;
        vector<int> f(32,0); // create a frequency array
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<32;j++)
            {
                if(nums[i] & (1<<j)) // Code to set the ith bit
                    f[j]++;
            }
        }
        
        /* [2,2,3,2] 
        F array:
        1 4 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
        
        Here the 0th and 1st bit should have 0 3 after three 2's and because of the one 3 they are 1 4. so we can construct the number using this. ( 2 is 10 and 3 is 11)
        */
        
        for(int i=0;i<32;i++)
        {
            if(f[i]%3==1)
            {
                res=res+(1<<i);   // this statement will construct the
                                  // that is not divisible by 3 because 
                                  // one element is extra and using this 
                                  // we constrct the number 
                                  // 1<<j == 1*(2^j)
            }
        }
        
        return res;
    }
};