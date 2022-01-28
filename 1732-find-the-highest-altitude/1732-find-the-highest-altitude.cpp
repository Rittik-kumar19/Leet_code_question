class Solution {
public:
    int largestAltitude(vector<int>&nums) {
        int n = nums.size();
        int alt = 0;
        int x = 0;
        for(int i=0;i<n;i++){
            x = nums[i]+x;
            alt = max(alt,(x));
        }
        return alt;
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