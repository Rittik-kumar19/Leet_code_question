class Solution {
public:
    int islands(int i, int j, vector<vector<char>> &grid)
    {
        if(i < 0 || i >= grid.size() || j < 0 || j >= grid[i].size())
            return 0;
        if(grid[i][j] == '1')
        {
            grid[i][j] = 0;    // markinng the current cell as visited by sinking the land
            int x = islands(i+1, j, grid);
            int y = islands(i-1, j, grid);
            int w = islands(i, j+1, grid);
            int z = islands(i, j-1, grid);
            if(1+x+y+z+w >= 1)              // if area of island is atleast connected by 1 cell then island exists
                return 1;
        }
        return 0;
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[0].size(); j++)
            {
                if(grid[i][j] == '1')
                    count += islands(i, j, grid);
            }
        }
        return count;
    }
};