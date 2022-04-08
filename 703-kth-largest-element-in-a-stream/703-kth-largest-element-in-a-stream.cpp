class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    KthLargest(int k, vector<int>& nums) {
        n=k;
        for(int ele : nums){
            add(ele);
        }
    }
    
    int add(int val) {
        if(pq.size()<n){
            pq.push(val);
        }
        else{
            if(pq.top()<val){
                pq.pop();
                pq.push(val);
                
            }
        }
        return pq.top();
        
    }
};