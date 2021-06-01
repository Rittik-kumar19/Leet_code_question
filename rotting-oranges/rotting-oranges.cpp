class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int lr=grid.size();
        int lc=grid[0].size();
        queue<pair<int,int>>q;
        int frc=0;
        for(int i=0;i<lr;i++){
            for(int j=0;j<lc;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                if(grid[i][j]==1){
                    frc++;
                }
            }
        }
        int dir[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
        int t=0;
        while(!q.empty()&&frc>0){
            t++;
            int sz=q.size();
            while(sz-->0){
                auto xy=q.front();
                q.pop();
                for(int i=0;i<4;i++){
                    int n_x=xy.first+dir[i][0];
                    int n_y=xy.second+dir[i][1];
                    if(valid(n_x,n_y,grid,lr,lc)){
                        continue;
                    }
                    else{
                        q.push({n_x,n_y});
                        grid[n_x][n_y]=2;
                        frc--;
                    }
                }
            }
        }
        return frc==0?t:-1;
    }
    bool valid(int x,int y,vector<vector<int>>&grid,int lr,int lc){
        if(x<0 || x>=lr || y<0 || y>=lc || grid[x][y]==0 || grid[x][y]==2 ){
           return true; 
        }
        else{
            return false;
        }
    }
};