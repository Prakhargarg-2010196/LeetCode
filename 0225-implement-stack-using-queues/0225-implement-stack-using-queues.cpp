class MyStack {
public:
    MyStack() {
        
    }
    /*Using two queues one to store the  element and nother to reverse its current order and then push back to the main queue*/
    // queue<int>q,rev;
    
//     void push(int x) {
//         // transfer the data in rev to get reverse order
//            while(!q.empty()){
//                 rev.push(q.front());
//                 q.pop();
//             }
       
//        // push the new data to the  queue     
//        q.push(x);
//         // store the data back to the main queue
//         while(!rev.empty()){
//             q.push(rev.front());
//             rev.pop();
//         }
//     }
    
//     int pop() {
//         int x=q.front();
//         q.pop();
//         return x;
    
//     }
    
//     int top() {
//         return q.front();
//     }
    
//     bool empty() {
//         return q.empty()&&rev.empty();
//     }

    
    //T:N ,S:N 
    queue<int>q;
    void push(int x) {
       
        // push the element to the queue 
        q.push(x);
        
        // to reverse the elements first remove n-1 elements from the front and then push them at back of the queue
        int k=q.size();// stores current size of the queue
        while(k>1){
            
            q.push(q.front());
            q.pop();
            k--;
        } 
        
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
    
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
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