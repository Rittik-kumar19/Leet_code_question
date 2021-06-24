class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        map<int, vector<int>>mp;
        for (int i=0; i<matrix.size(); i++) {
            for (int j=0; j<matrix[i].size(); j++) {
                mp[i+j].push_back(matrix[i][j]);
            }
        }
        for(auto i:mp)
        {   if(i.first%2==0)
            {
                for(int j=i.second.size()-1;j>=0;j--)
                    result.push_back(i.second[j]);
            }
            else
            {
                for(int j=0;j<i.second.size();j++)
                    result.push_back(i.second[j]);
            }
        }
        return result;
    }
};