class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        // int l = 0, r = m*n - 1;
        int i=0,j=n-1;
        while(i>=0 && i<m && j>=0 && j<n){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){
                j--;
            }
            else if(matrix[i][j]<target){
                i++;
            }
        }
        return false;
        
        // while(l<=r){
        //     int mid = l + (r-l)/2;
        //     if(matrix[mid/n][mid%n]==target){
        //         return true;
        //     }else if(matrix[mid/n][mid%n]>target){
        //         r = mid - 1;
        //     }else{
        //         l = mid + 1;
        //     }
        // }
        // return false;
    }
};