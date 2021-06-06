// bool Tocheck(vector<vector<int>>&mat,vector<vector<int>>&target){
//     // int i,j;
//     if(mat==target){
//         return true;
//     }
//     else{
//         return false;
//     }
    
// }
// void transpose(vector<vector<int>>&mat,int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             swap(mat[i][j],mat[j][i]);
//         }
//     }
// }
// void reverseR(vector<vector<int>>&mat,int n){
//     int k;
//  for (int i = 0; i < n; i++)
//  {
//  k = n-1;
//  for (int j = 0; j < k; j++)
//  {
//  swap(mat[i][j], mat[i][k]);
//  k--;
//  }}
// }


// class Solution {
// public:
//     bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
//         int n=mat.size();
//         if(Tocheck(mat,target)){
//             return true;
//         }
//         // int i;
//         for(int i=0;i<4;i++){
//             transpose(mat,n);
//             reverseR(mat,n);
//             if(Tocheck(mat,target)){
//                 return true;
//             }
//         }
//         return false;  
//     }
// };
class Solution {
public:
    void rotate(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); ++i) {
            for (int j = i; j < image.size(); ++j)
                swap(image[i][j], image[j][i]);
        }
		for(int i=0;i<image.size();i++)
             reverse(image[i].begin(),image[i].end());
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target)
            return true;
        rotate(mat);
        if(mat==target)
            return true;
        rotate(mat);
        if(mat==target)
            return true;
        rotate(mat);
        if(mat==target)
            return true;
        return false;
        
        
    }
};