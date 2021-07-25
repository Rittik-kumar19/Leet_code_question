class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // vector<int>vnew;
        // for(int i=0;i<n-1;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             vnew.push_back(i);
        //             vnew.push_back(j);
        //             return vnew;
        //         }
        //     }
        // }
        // return vnew;
        int n=nums.size();
        vector<int>vnew;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                vnew.push_back(mp[target-nums[i]]);
                vnew.push_back(i);
                return vnew;
            }
            mp[nums[i]]=i;
        }
        return vnew;
        // sort(nums.begin(),nums.end());
        // int n=nums.size();
        // vector<int>vnew;
        // int i=0;
        // int j=n-1;
        // while(i<j){
        //     if(nums[i]+nums[j]>target){
        //         j--;
        //         continue;
        //     }
        //     else if(nums[i]+nums[j]<target){
        //         i++;
        //         continue;
        //     }
        //     else if(nums[i]+nums[j]==target){
        //         vnew.push_back(i);
        //         vnew.push_back(j);
        //         return vnew;
        //     }
        // }
        // return vnew;
        //_____sorted array rahta hai tabhi 2 pointer use karte hai___
    }
};