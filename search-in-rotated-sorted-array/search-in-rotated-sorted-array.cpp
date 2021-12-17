class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0]==target) return 0;
            else return -1;
        }
        int pivot = minposi(nums);
        cout<<pivot<<endl;
        int lsa=Bs(nums,0,pivot-1,target);
        int rsa = Bs(nums,pivot,nums.size()-1,target);
        cout<<lsa<<endl;
        cout<<rsa<<endl;
        if(lsa>-1){
            return lsa;
        }
        else{
            return rsa;
        }
        
    }
    int Bs(vector<int>& nums, int st, int end,int target){ 
         while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
        }
        // if(i>=0 && nums[i]==target) return i;
        // if(j>=0 && nums[j]==target) return j;
        return -1;
    }
    int minposi(vector<int>&nums){
        int n=nums.size();
        int st=0,end=nums.size()-1;
        if(n==1){
            return 0;
        }
        while(st<=end){
            int mid = st + (end-st)/2;
            int prev = (mid+n-1)%n;
            int next = (mid+1)%n;
            if(nums[mid]<nums[prev] and nums[mid]<nums[next]){
                return mid;
            }
            else if(nums[end]<nums[mid]){
                st=mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return -1;
    }
};