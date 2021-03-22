class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // vector<int>ans;
        // if(nums.size()==0){
        //     ans.push_back(-1);
        //     ans.push_back(-1);
        //     return ans;
        // }
        // else if(nums.size()!=0){
        // auto xx=equal_range(nums.begin(),nums.end(),target);
        // int lw=xx.first-nums.begin();
        // int up=xx.second-nums.begin();
        // if(nums[lw]!=target || nums[up-1]!=target){
        //     ans.push_back(-1);
        //     ans.push_back(-1);
        //     return ans;
        // }
        // ans.push_back(lw);
        // ans.push_back(up-1);
        // }
        // return ans;
        
        vector<int>ans;
        if(nums.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
            // return ans;
        }
        else if(nums.size()!=0){
            int res1=0;
        int res2=0;
        int st=0,end=nums.size()-1;
        int mid1=0;
        while(st<=end){
            mid1=st+(end-st)/2;
            if(nums[mid1]<target){
                st=mid1+1;
            }
            else if(nums[mid1]>target){
                end=mid1-1;
            }
            else if(nums[mid1]==target){
                res1=mid1;
                end=mid1-1;
            }
        }
        // if(res1==0){
        //     res1=-1;
        // }
        int mid2=0;int sts=0;int ends=nums.size()-1;
        while(sts<=ends){
            mid2=sts+(ends-sts)/2;
            if(nums[mid2]<target){
                sts=mid2+1;
            }
            else if(nums[mid2]>target){
                ends=mid2-1;
            }
            else if(nums[mid2]==target){
                res2=mid2;
                sts=mid2+1;
            }
        }
        // if(res2==0){
        //     res2=-1;
        // }
        if(nums[res1]!=target ||nums[res2]!=target){
            ans.push_back(-1);
            ans.push_back(-1);
            // return ans;
        }
        else{
            ans.push_back(res1);
            ans.push_back(res2);
        }
        // return ans;
        }
        return ans;
    }
};