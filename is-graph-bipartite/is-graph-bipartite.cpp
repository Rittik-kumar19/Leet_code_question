class Solution {
public:
     bool DFS(vector<vector<int>>& graph, vector<int>& visited, int node, int color){
        
        for(int elem : graph[node]){
            if(visited[elem]==-1){
                visited[elem]=color;
                bool isValid=DFS(graph, visited, elem, (visited[elem]+1)%2);
                if(isValid==false)
                    return false;
            }
            else if(visited[elem]!=color)
                return false;
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        if(n==0) return true;
        
        vector<int> visited(n, -1);
        
        for(int i=0; i<n; i++){
            if(visited[i]==-1){
                visited[i]=0;
                bool isValid=DFS(graph, visited, i, (visited[i]+1)%2);
                if(isValid==false)
                    return false;
            }
        }
        return true;
    }
    // bool isBipartite(vector<vector<int>>& graph) {
    //     int V=graph.size();
    //     vector<int>vis(V,-1);
    //     for(int i=0;i<V;i++){
    //         if(vis[i]==-1){
    //             if(!Dfs(i,graph,V,vis)){
    //                 return false;
    //             }
    //         }
    //     }
    //     return true;
    // }
    // bool Dfs(int src,vector<vector<int>>&graph,int V,vector<int>&vis){
    //     if(vis[src]!=-1){
    //         vis[src]=1;
    //     }
    //     for(auto x:graph[src]){
    //         if(vis[x]==-1){
    //             vis[x]=1-vis[src];
    //             bool chh=Dfs(x,graph,V,vis);
    //             if(!chh){
    //                 return false;
    //             }
    //         }
    //         else if(vis[x]!=vis[src]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
};