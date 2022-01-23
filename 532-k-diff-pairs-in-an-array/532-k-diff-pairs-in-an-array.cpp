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
//Using map
// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
        
//         int n=nums.size();
//         unordered_map<int,int>mymap;
//         int count=0;
        
        
//         for(int i=0;i<n;i++){
//             mymap[nums[i]]++;
//         }
        
//         if(k==0){
//             for(auto x:mymap){
//                 if(x.second>1){
//                     //Unique k wajah se 1 badha rahe hai
//                     count++;
//                 }
//             }
//              return count;
//         }
    
//         for(auto x:mymap){
//             if(mymap.count(x.first-k)){
//                 //unique k wajah se 1 badha rahe hai
//                 count++;
//             }
//         }
//         return count;
//     }
// };


//Using Two pointer

// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         int i=0,j=i+1;
//         int ans =0;
//         while(j<n){
//             if(i==j){
//                 j++;
//                 continue;
//             }
//             int x = nums[i];
//             int y = nums[j];
//             if(abs(y-x)==k){
//                 i++;
//                 j++;
//                 ans++;
//                 while(i<n and nums[i]==x){
//                     i++;
//                 }
//                 while(j<n and nums[j]==y){
//                     j++;
//                 }
//             }
//             else if(abs(y-x)>k){
//                 i++;
//                 while(i<n and nums[i]==x){
//                     i++;
//                 }
//             }
//             else if(abs(y-x)<k){
//                 j++;
//                 while(j<n and nums[j]==y){
//                     j++;
//                 }
//             }
            
//         }
//         return ans;
//     }
// };

//Binary search


class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 0;
        if(k==0){
            int prev = nums[0];
            bool flag = true;
            for(int i=1;i<n;i++){
                if(nums[i]==prev){
                    if(flag){
                        ans++;
                    }
                    flag = false;
                    prev=nums[i];
                }
                else if(nums[i]!=prev){
                    flag = true;
                    prev = nums[i];
                
                }
            }
            return ans;
        }
        
        auto ip = unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),ip));
        int nn = nums.size();
        for(int i=0;i<nn;i++){
            int xx=binary_search(nums.begin(),nums.begin()+i,nums[i]-k);
            if(xx){
                ans++;
            }
        }
        return ans;
        
    }
};

















