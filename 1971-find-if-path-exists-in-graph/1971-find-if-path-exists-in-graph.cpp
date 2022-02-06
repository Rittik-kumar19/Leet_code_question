class Solution {
public:
     bool BFS(int n, vector<int>adj[], int sc, int dn,vector<int>&vis){
              queue<int>q;
        q.push(sc);
        vis[sc]=1;
        // if(sc==dn){
        //     return true;
        // }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            if(x==dn){
                return true;
            }
            for(auto vp:adj[x]){
                if(vis[vp] and vp==dn){
                    return true;
                }
                if(!vis[vp]){
                    q.push(vp);
                    vis[vp]=1;
                }
            }
        }
        return false;
     }
    bool validPath(int n, vector<vector<int>>& edges, int sc, int dn) {
        
        
        // int n = edges.size();
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                if(BFS(n,adj,sc,dn,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};