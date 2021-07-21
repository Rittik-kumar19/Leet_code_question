class MinStack {
public:
    stack<int>s;
    stack<int>ss;
    /** initialize your data structure here. */
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if(ss.size()==0 || val<=ss.top()){
            ss.push(val);
        }
        return;
    }
    
    void pop() {
        int x;
        if(s.size()>0){
            x=s.top();
            s.pop();
        }
        if(ss.size()>0 and x==ss.top()){
            ss.pop();
        }
        return;
    }
    
    int top() {
        if(s.size()>0){
            return s.top();
        }
        return -1;
    }
    
    int getMin() {
        if(ss.size()>0){
            return ss.top();
        }
        else{
            return -1;
        }
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */