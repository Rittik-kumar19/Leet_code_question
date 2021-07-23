class CustomStack {
public:
    int sz;
    vector<int>v;
    CustomStack(int maxSize) {
        sz=maxSize;
    }
    
    void push(int x) {
        if(v.size()<sz){
            v.push_back(x);
        }
    }
    
    int pop() {
        if(v.size()!=0){
            int x=v.back();
            v.pop_back();
            return x;
        }
        else{
            return -1;
        }
    }
    
    void increment(int k, int val) {
        int n=v.size();
        for(int i=0;i<min(k,n);i++){
            v[i]=v[i]+val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */