class Solution {
public:
    vector<vector<int>> nbrs = {{0,1},{1,0},{0,-1}, {-1,0}};
    void dfs(vector<vector<char>>& graph, int i,int j, vector<vector<bool>>& visited )
    {
        visited[i][j]  = true;
        for(auto &nbr : nbrs )
        {
            int x = i + nbr[0];
            int y = j + nbr[1];
            
            if(x < 0 || y < 0 || x >= graph.size() || y >= graph[0].size() || visited[x][y]|| graph[x][y] == 'X')
                continue;
            dfs(graph, x, y, visited);
        }
    }
    void solve(vector<vector<char>>& board) {
        
        int m = board.size() , n = board[0].size(); 
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        //do dfs from the boundary
        //top and the bottom boundaries
        for(int i = 0;i<n;i++){
            
            if(!visited[0][i] && board[0][i] == 'O')
                dfs(board, 0,i, visited );
            if(!visited[m-1][i] && board[m-1][i] == 'O')
                dfs(board, m-1,i, visited );                

        }
        
        //for side boundary
        for(int i = 0;i<m;i++)
        {
            if(!visited[i][0] && board[i][0] == 'O')
                dfs(board, i,0, visited );
            
            if(!visited[i][n-1] && board[i][n-1] == 'O')
                dfs(board , i, n-1, visited);
        }
        
        //flip the relevent zero
        
        for(int i =0;i<m;i++)
        {
            for(int j =0;j<n;j++)
            {
                if(board[i][j] == 'O' && !visited[i][j])
                    board[i][j] = 'X';
            }
        }
        
        
    }
};