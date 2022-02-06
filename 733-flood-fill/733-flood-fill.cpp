class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //pre calculation
        int val = image[sr][sc];
        //storing value
        int dx[4] = {0,0,1,-1};
        int dy[4] = {1,-1,0,0};
        //all 4 dirction 
        
        queue<pair<int,int>>q;
        q.push({sr,sc});
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            image[sr][sc]=newColor;
            for(int i=0;i<4;i++){
                int nx = x.first+dx[i];
                int ny = x.second+dy[i];
                if(nx<0 or ny<0 or nx>image.size()-1 or ny>image[0].size()-1 or image[nx][ny]!=val or image[nx][ny]==newColor){
                 continue;
                }
                q.push({nx,ny});
                image[nx][ny]=newColor;
            }
        }
        return image;
    }
};