// class Solution {
// public:
//     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
//        map<int,int>mp;
//        for(int i=0;i<nums2.size();i++){
//            mp[nums2[i]]=i;
//        }
//        vector<int>v;
//        stack<int>st;
//        for(int i=nums2.size()-1;i>=0;i--){
//            if(st.size()==0){
//                v.push_back(-1);
//                // st.push(nums2[i]);
//            }
//            else if(st.size()>0 and st.top()>nums2[i]){
//                v.push_back(st.top());
//                // st.push(nums2[i]);
//            }
//            else if(st.size()>0 and st.top()<=nums2[i]){
//                while(st.size()>0 and st.top()<=nums2[i]){
//                    st.pop();
//                }
//            }
//            if(st.size()==0){
//                v.push_back(-1);
//                // st.push(nums2[i]);
//            }
//            else{
//                v.push_back(st.top());
//                // st.push(nums2[i]);
//            }
//            st.push(nums2[i]);
//        }
//        reverse(v.begin(),v.end());
//        vector<int>ans;
//        for(int i=0;i<nums1.size();i++){
//            int x=mp[nums1[i]];
//            ans.push_back(v[x]);
//        }
//        return v;
//     }
// };
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int>s;
        unordered_map<int,int>mp;
        vector<int>v;
        for(int i=0;i<nums2.size();i++){
            mp[nums2[i]]=i;
        }
        for(int i=nums2.size()-1;i>=0;i--){
            if(s.empty())
                v.push_back(-1);
            else if(!s.empty()&&nums2[i]<s.top()){
                // mp[nums2[i]]=s.top();
                v.push_back(s.top());
            }
            else if (!s.empty()&&nums2[i]>=s.top()){
                while(!s.empty()&&nums2[i]>=s.top())
                    s.pop();
            if(s.empty())
                // mp[nums2[i]]=-1;
                v.push_back(-1);
            else 
                // mp[nums2[i]]=s.top();
                v.push_back(s.top());
                
            }
            s.push(nums2[i]);
        }
        reverse(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            int x =mp[nums1[i]];
            ans.push_back(v[x]);
        }
        return ans;
    }
};
