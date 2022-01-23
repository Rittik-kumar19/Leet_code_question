// class Solution {
// public:
//     int findPairs(vector<int>& A, int B) {
//         int N = A.size();
//         int cnt=0;
//         set<pair<int,int>>s;
//         for(int i=0;i<N-1;i++){
//             for(int j=i+1;j<N;j++){
//                 int x = abs(A[i]-A[j]);
//                 if(x==B and s.count({A[i],A[j]})==0 and s.count({A[j],A[i]})==0){
//                     s.insert({A[i],A[j]});
//                     cnt++;
//                 }
//             }
//         }
//         return cnt;
//     }
// };

//isme no of pair puchhta toh -->toh different sochte
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        int n=nums.size();
        unordered_map<int,int>mymap;
        int count=0;
        
        
        for(int i=0;i<n;i++){
            mymap[nums[i]]++;
        }
        
        if(k==0){
            for(auto x:mymap){
                if(x.second>1){
                    count++;
                }
            }
             return count;
        }
    
        for(auto x:mymap){
            if(mymap.count(x.first-k)){
                count++;
            }
        }
        return count;
    }
};