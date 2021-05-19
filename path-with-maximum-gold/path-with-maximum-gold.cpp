class Solution {
public:
     int backtrack(int r,int c,int m,int n,vector<vector<int>>& grid) {
        if(r>=m || r<0 || c>=n || c<0) return 0;
        if(grid[r][c]==0) 
            return 0; //we cannot travel further from a zero
        int count=grid[r][c];
        grid[r][c]=0; //so that we don't cross grid[r][c] in the same path
        int ans = count+ max(max(backtrack(r-1,c,m,n,grid),backtrack(r,c-1,m,n,grid)),max(backtrack(r+1,c,m,n,grid),backtrack(r,c+1,m,n,grid ))); //go in all 4 directions from the starting point and pick the path with maximum gold
        grid[r][c] = count; //backtrack
        return ans;
    }
    int getMaximumGold(vector<vector<int>>& grid) {
        int ans=0;
        int m = grid.size();
        int n = grid[0].size();
		//we can start and stop at any point in the grid
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(grid[i][j]==0) continue; //never visit a place with value 0
                ans = max(ans,backtrack(i,j,m,n,grid));
            }
        }
        return ans;
    }
};