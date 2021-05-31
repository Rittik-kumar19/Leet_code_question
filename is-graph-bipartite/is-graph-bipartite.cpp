class Solution {
public:

    bool isBipartite(vector<vector<int>>& graph) {
        int V=graph.size();
        vector<int>vis(V,-1);
        for(int i=0;i<V;i++){
            if(vis[i]==-1){
                if(!bfs(i,graph,V,vis)){
                    return false;
                }
            }
        }
        return true;
    }
    bool bfs(int src,vector<vector<int>>&graph,int V,vector<int>&vis){
        queue<int>q;
        q.push(src);
        vis[src]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto x:graph[node]){
                if(vis[x]==-1){
                    vis[x]=1-vis[node];
                    q.push(x);
                }
                else if(vis[x]==vis[node]){
                    return false;
                }
            }
        }
        return true;
    }
};