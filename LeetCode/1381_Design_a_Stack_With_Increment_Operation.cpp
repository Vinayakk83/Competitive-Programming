class CustomStack {
public:
    vector<int> stack;
    int n;
    CustomStack(int maxSize) {
        n = maxSize;
    }
    
    void push(int x) {
        if(stack.size() == n)
            return;
        stack.push_back(x);
    }
    
    int pop() {
        if(stack.empty())
            return -1;
        
        int x = stack.back();
        stack.pop_back();
        
        return x;
    }
    
    void increment(int k, int val) {
        int i = 0;
        while(i < n && i < k && i < stack.size()) {
            stack[i] += val;
            i++;   
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
