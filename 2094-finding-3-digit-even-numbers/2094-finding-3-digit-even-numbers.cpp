//class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& nums) {
//         int n = nums.size();
//         set<int>s;
//         for(int i=0;i<n-2;i++){
//             for(int j=i+1;j<n-1;j++){
//                 for(int k=j+1;k<n;k++){
//                     int a = nums[i]*100+nums[j]*10+nums[k];
//                     int b = nums[i]*100+nums[k]*10+nums[j];
//                     int c = nums[j]*100+nums[j]*10+nums[k];
//                     int d = nums[j]*100+nums[k]*10+nums[j];
//                     int e = nums[k]*100+nums[j]*10+nums[i];
//                     int f = nums[k]*100+nums[i]*10+nums[j];
//                     if(a%2==0 and a>99){
//                         s.insert(a);
//                     }
//                     if(b%2==0 and b>99){
//                         s.insert(b);
//                     }
//                     if(c%2==0 and c>99){
//                         s.insert(c);
//                     }
//                     if(d%2==0 and d>99){
//                         s.insert(d);
//                     }
//                     if(e%2==0 and e>99){
//                         s.insert(e);
//                     }
//                     if(f%2==0 and f>99){
//                         s.insert(f);
//                     }
//                 }
//             }
//         }
//          vector<int>ans(s.begin(),s.end());
//         return ans;
//     }
// };
    
class Solution {
public:
    vector<int> ans;
    vector<int> findEvenNumbers(vector<int>& nums) {
        int n=nums.size();
        set<int> st;
        for(int i=0;i<n-2;++i){
            for(int j=i+1;j<n-1;++j){
                for(int k=j+1;k<n;++k){
                    int a=nums[i]*100 + nums[j]*10 + nums[k];
                    int b=nums[i]*100 + nums[k]*10 + nums[j];
                    int c=nums[j]*100 + nums[i]*10 + nums[k];
                    int d=nums[j]*100 + nums[k]*10 + nums[i];
                    int e=nums[k]*100 + nums[i]*10 + nums[j];
                    int f=nums[k]*100 + nums[j]*10 + nums[i];
                    if(a%2==0 && a>99) st.insert(a);
                    if(b%2==0 && b>99) st.insert(b);
                    if(c%2==0 && c>99) st.insert(c);
                    if(d%2==0 && d>99) st.insert(d);
                    if(e%2==0 && e>99) st.insert(e);
                    if(f%2==0 && f>99) st.insert(f);
                }
            }
        }
        for(auto &x : st) ans.push_back(x);
        return ans;
    }
};