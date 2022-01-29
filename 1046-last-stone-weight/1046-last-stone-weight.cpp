class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       int n = stones.size();
       priority_queue<int>mxheap;
       for(auto it:stones){
           mxheap.push(it);
       }
       while(mxheap.size()>1){
           int x = mxheap.top();
           mxheap.pop();
           int y = mxheap.top();
           mxheap.pop();
           int res = (x==y)?0:abs(x-y);
           mxheap.push(res);
       }
        int ans = 0;
       if(mxheap.size()==1){
           ans = mxheap.top();
           // mxheap.pop();
       }
        return ans;
    }
};