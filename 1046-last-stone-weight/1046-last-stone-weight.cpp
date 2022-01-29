// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {
//        int n = stones.size();
//        priority_queue<int>mxheap;
//        for(auto it:stones){
//            mxheap.push(it);
//        }
//        while(mxheap.size()>1){
//            int x = mxheap.top();
//            mxheap.pop();
//            int y = mxheap.top();
//            mxheap.pop();
//            int res = (x==y)?0:abs(x-y);
//            mxheap.push(res);
//        }
//         int ans = 0;
//        if(mxheap.size()==1){
//            ans = mxheap.top();
//            // mxheap.pop();
//        }
//         return ans;
//     }
// };


class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return stones[0];
        }
        if(n==2){
            return max(stones[0], stones[1])-min(stones[0], stones[1]);
        }
        sort(stones.begin(), stones.end());
        int a = stones[n-1]-stones[n-2];
        if(a==0){
            //both destroyed
            stones.erase(stones.begin()+(n-1));
            stones.erase(stones.begin()+(n-2));
        }else{
            stones[n-2] = a;
            stones.erase(stones.begin()+(n-1));
        }
        return lastStoneWeight(stones);
    }
};