class MyStack {
public:
    /** Initialize your data structure here. */
    queue<int>q1;
    queue<int>q2;
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
       q2.push(x);
       if(q1.size()>0){
           while(q1.size()>0){
               int z=q1.front();
               q2.push(z);
               q1.pop();
           }
       }
       q1.swap(q2); 
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
       if(q1.size()>0){
           int p=q1.front();
           q1.pop();
           return p;
       } 
       return -1;
    }
    
    /** Get the top element. */
    int top() {
        if(q1.size()>0){
            int pp=q1.front();
            return pp;
        }
        return -1;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(q1.size()==0){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */