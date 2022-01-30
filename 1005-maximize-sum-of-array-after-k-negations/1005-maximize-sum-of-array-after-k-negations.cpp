class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>minheap(nums.begin(),nums.end());
        while(k--){
            int x = minheap.top();
            minheap.pop();
            minheap.push((-1*x));
        }
        int sum =0;
        while(minheap.size()>0){
           int xt = minheap.top();
            minheap.pop();
            sum+=xt;
        }
        return sum;
    }
};