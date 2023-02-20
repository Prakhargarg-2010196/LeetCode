class MyQueue {
public:
    stack<int>s,rev;
    MyQueue() {
        
    }
    
    void push(int x) {
        //transfer from s to rev
        while(!s.empty()){
            rev.push(s.top());
            s.pop();
        } 
        // push the new element
        s.push(x);
        // reverse and then push to the main stack
        while(!rev.empty()){
            s.push(rev.top());
            rev.pop();
        }
        
    }
    
    int pop() {
        int x=s.top();
        s.pop();
        return x;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
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