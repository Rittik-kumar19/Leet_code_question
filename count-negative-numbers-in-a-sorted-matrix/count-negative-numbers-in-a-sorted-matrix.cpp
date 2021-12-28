class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            //use upperbound function of binary search
            int l1=upper_bound(grid[i].rbegin(),grid[i].rend(),-1)-grid[i].rbegin();
            cout<<l1<<endl;
            ans+=l1;
        }
        return ans;
    }
};