class Solution {
public:
    bool dfs(int i, vector<int> &state, vector<int> &orderings, map<int, vector<int>> &adjList) {
        state[i] = 0;
        bool res = true;
        
        for(auto nextNode : adjList[i]) {
            if(state[nextNode] == -1)
                res = res & dfs(nextNode, state, orderings, adjList);
            if(state[nextNode] == 0)
                return false;
        }
        state[i] = 1;
        orderings.push_back(i);
        return true;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        if(n==0)
            return {};
        
        //Making adjacency list
        map<int, vector<int>> adjList;
        for(int i=0;i<prerequisites.size();i++)
            adjList[prerequisites[i][0]].push_back(prerequisites[i][1]);
        
        for(int i=0; i<adjList.size();i++){
            cout<<i<<":";
            for(int j=0;j<adjList[i].size();j++)
                cout<<adjList[i][j]<<" ";
            cout<<endl;
        }
        
        vector<int> state(n,-1);
        vector<int> orderings;
        
        for(int i=0;i<n;i++){
            if(state[i] == -1) {
                bool res = dfs(i, state, orderings, adjList);
                if(res == false)
                    return {};
            }
        }
        
        return orderings;
    }
};