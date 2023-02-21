class MyQueue {
public:
    stack<int>s,rev;
    MyQueue() {
        
    }
    
    void push(int x) {
        // T:N S:N
        //transfer from s to rev
        // while(!s.empty()){
        //     rev.push(s.top());
        //     s.pop();
        // } 
        // // push the new element
        // s.push(x);
        // // reverse and then push to the main stack
        // while(!rev.empty()){
        //     s.push(rev.top());
        //     rev.pop();
        // }
        
        // T:1(amortized),S:N
        // the order during push does n't matter much
        s.push(x);
        
    }
    
    int pop() {
        // T:N,S:N
        // int x=s.top();
        // s.pop();
        // return x;
        
        // T:1(amortized),S:N
        // here rev stores the ordered stack that is queue so the top element represents the front of the queue
        
        int x=peek();        
        rev.pop();
        return x;
    }
    
    int peek() {
        // T:N,S:N
        // return s.top();
        
        // T:1(amortized),S:N
        // here rev stores the ordered stack that is queue so the top element represents the front of the queue
        if(rev.empty()){
            while(!s.empty()){
                    rev.push(s.top());
            s.pop();
             }   
            
        }
        return rev.top();
        
    }
    
    bool empty() {
        // T:N,S:N
        // return s.empty();
        
        // T:1(amortized),S:N
        return s.empty()&&rev.empty();// both unordered and ordered should be empty
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