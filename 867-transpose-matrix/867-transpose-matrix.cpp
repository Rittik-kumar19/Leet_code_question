class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        // vector<vector<int>>mat=matrix;
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>tranpose(m,vector<int>(n,0));
        for(int i=0;i<tranpose.size();i++){
            for(int j=0;j<tranpose[0].size();j++){
                tranpose[i][j]=matrix[j][i];
            }
        }
       return tranpose; 
    }
};