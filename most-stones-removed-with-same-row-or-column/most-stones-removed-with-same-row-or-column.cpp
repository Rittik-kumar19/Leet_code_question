class Solution {
public:
    vector<int> parent;
    vector<int> rank;
     
    int _find(int x){
        if(parent[x] == x) return x;
        return parent[x] = _find(parent[x]);
    }
    
    
    
     void _union(int x,int y){
         x = _find(x);
         y = _find(y);
         

         if( x != y)
         rank[x] < rank[y] ? parent[x] = y : parent[y] = x;
         
         if(rank[x] == rank[y]) 
           rank[x]++;
         
     }
    
    
    
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        parent.resize(n);
        rank.resize(n);
        for(int i = 0; i < n;i++){
            parent[i] = i;
            rank[i] = 1;
        }
        
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++ ){
                if(stones[i][0] == stones[j][0] || stones[i][1] == stones[j][1])
                    _union(i,j);
                }
        }
        
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(parent[i] == i) count++;
        }
        return n - count;
        
    }
};