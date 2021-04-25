class MinStack {
    private:
    stack<int> s1;    
    stack<int> s2;   //for containing min value at top 
public:
    void push(int x) {
	    s1.push(x);
	    if(s2.empty() || x<=s2.top()) s2.push(x);	    
    }
    void pop() {
	    if(s1.top()==s2.top()) s2.pop();
	    s1.pop();
    }
    int top() {
	    return s1.top();
    }
    int getMin() {
	    return s2.top();
    }
// public:
//     /** initialize your data structure here. */
//     stack<int>s;
//     stack<int>ss;
    
//     void push(int x) {
//         s.push(x);
//         if(ss.size()>=0 && ss.top()>=x){
//             ss.push(x);
//         }
//     }
    
//     void pop() {
//        if(s.size()==0){
//            return;
//        }
//         int x=s.top();
//         s.pop();
//         if(x==ss.top()){
//             ss.pop();
//             // cout<<x<<endl;
//         }
//         // cout<<x<<endl;
//         return;
        
//     }
    
//     int top() {
//         return s.top();
//     }
    
//     int getMin() {
//         if(ss.size()==0){
//             return -1;
//         }
//         return ss.top();
//     }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */