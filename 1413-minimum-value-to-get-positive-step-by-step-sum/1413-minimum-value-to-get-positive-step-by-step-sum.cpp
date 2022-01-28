class Solution {
public:
    int minStartValue(vector<int>& nums) {
        vector<int>v(nums.size()+1,0);
        for(int i=1;i<=nums.size();i++){
            v[i]=v[i-1]+nums[i-1];
        }
        int mn = *min_element(v.begin()+1,v.end());
        int ans = mn;
        int res = 0;
        if(ans<0){
            res = abs(ans)+1;
        }
        else if(ans ==0){
            res = 1;
        }
        else if(ans>0){
            res = 1;
        }
        return res;
    }
};

/*

-3,2,-3,4,2
-3,-1,-4,0,2



*/