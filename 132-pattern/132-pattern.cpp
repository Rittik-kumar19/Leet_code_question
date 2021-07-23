class Solution {
public:
    bool find132pattern(vector<int>& nums) {
       int n=nums.size();
       vector<int>m(n,INT_MAX);
        // int mn=m[0];
        for(int i=1;i<n;i++){
           m[i]=min(m[i-1],nums[i-1]); 
        }
        stack<int>st;
        for(int i=0;i<n;i++){
            cout<<m[i]<<" ";
        }
        for(int i=n-1;i>=0;i--){
            while(st.size()>0 and st.top()<=m[i]){
                st.pop();
            }
            if(st.size()>0 and st.top()<nums[i]){
                return true;
            }
            st.push(nums[i]);
        }
        return false;
    }
};