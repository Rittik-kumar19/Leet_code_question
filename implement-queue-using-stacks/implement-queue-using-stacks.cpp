class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    /** Initialize your data structure here. */
    MyQueue() {
        
    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        if(s1.size()>0){
            while(s1.size()>0){
                int p=s1.top();
                s2.push(p);
                s1.pop();
            }
        }
        s1.push(x);
        if(s2.size()>0){
            while(s2.size()>0){
                int pp=s2.top();
                s1.push(pp);
                s2.pop();
            }
        }
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        if(s1.size()>0){
            int y=s1.top();
            s1.pop();
            return y;
        }
        return -1;
    }
    
    /** Get the front element. */
    int peek() {
        if(s1.size()>0){
            int z=s1.top();
            return z;
        }
        return -1;
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        if(s1.size()==0){
            return true;
        }
        else {
            return false;
        }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */