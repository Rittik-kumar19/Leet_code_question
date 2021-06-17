class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        set<int>s;
        vector<int>v;
        for(int i=0;i<n1;i++){
            s.insert(nums1[i]);
        }
        set<int>s1;
        for(int j=0;j<n2;j++){
            if(s.count(nums2[j])==1&&s1.count(nums2[j])==0){
                 s1.insert(nums2[j]);
                v.push_back(nums2[j]);
               
            }
        }
        return v;
        
    }
};