class Solution {
public:
   int recurse(const vector<vector<int>> &grid, vector<vector<int>>& memo, int x, int y) 
      {
        if (x == 0 and y == 0) 
          return grid[x][y];
        if (x < 0 or y < 0) 
          return INT_MAX;
        
        if (memo[x][y] > 0) 
          return memo[x][y];
        
        int ans = grid[x][y] + min(recurse(grid, memo, x - 1, y), recurse(grid, memo, x, y - 1));
        
        return memo[x][y] = ans;
      }


    int minPathSum(vector<vector<int>> &grid) 
    {
        int m = grid.size();
        if (m == 0) 
          return 0;
        int n = grid[0].size();
        vector<vector<int>> memo(m, vector<int>(n, 0));
        return recurse(grid, memo, m - 1, n - 1);
    }
};