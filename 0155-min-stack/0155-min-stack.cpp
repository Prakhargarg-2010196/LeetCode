class MinStack {
public:
    vector<int>s,min;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push_back(val);
        if(min.empty()||min.back()>=val){
            min.push_back(val);// push if no element exists in min or when the top of min is greater than value being pushed
        }
        
    }
    
    void pop() {
        
        if(min.back()==s.back()){
            min.pop_back();// pop the min if min's top is equal to the element being popped 
        }
        s.pop_back();// pop the element too
    
    }
    
    int top() {
        return s.back();// top of main array 
    }
    
    int getMin() {
        return min.back(); // top of the min array
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