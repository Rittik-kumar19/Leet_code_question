class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int>mp;
        for(auto ar:arr){
            mp[ar]++;
        }
        int p=0;
        for(int i=0;i<arr.size();i++){
            if(mp[arr[i]]==1){
                p++;
                if(p==k){
                    return arr[i];
                }
            }
        }
        return "";
    }
};