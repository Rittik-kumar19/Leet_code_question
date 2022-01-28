class Solution {
public:
    int largestAltitude(vector<int>&nums) {
        // int n = nums.size();
        // int alt = 0;
        // int x = 0;
        // for(int i=0;i<n;i++){
        //     x = nums[i]+x;
        //     alt = max(alt,(x));
        // }
        // return alt;
        
        int n = nums.size();
        vector<int>v(n+1,0);
        for(int i=1;i<=n;i++){
            v[i]=v[i-1]+nums[i-1];
        }
        int mx = *max_element(v.begin(),v.end());
        return mx;
        
    }
};

/*
x = -5, -4 ,1,1,-6
alt = 0,0,1,1,1

*/



/*

-5,1,5,0,-7

0 -5 -4 1 1 -6


alt=-5



*/