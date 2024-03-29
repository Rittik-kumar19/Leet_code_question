class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        
        //Since we have 1 based index for nodes
        //This vector represents the parent of each node
		
        vector<int> parent(edges.size()+1, 0); 
        vector<int> redundantEdge;
        
        for(int i=0;i<parent.size();i++)
            parent[i] = i;
        
        for(auto e : edges) {
            int u = e[0];
            int v = e[1];
            
            while(u!=parent[u])
                u = parent[u];
            while(v!=parent[v])
                v = parent[v];
            
            if(u==v)
                redundantEdge = e;
            else
                parent[v] = u;
        }
        return redundantEdge;
    }
};